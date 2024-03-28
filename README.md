## Laboratory work II

# Part 1

Current tasl: 3

3. Создайте файл hello_world.cpp в локальной копии репозитория (который должен был появиться на шаге 2). Реализуйте программу Hello world на языке C++ используя плохой стиль кода. Например, после заголовочных файлов вставьте строку using namespace std;.

script:
```shell
$ touch examples/hello_world.cpp
```

script:
```shell
$ cat >  examples/hello_world.cpp <<EOF
> #include <iostream>

using namespace std;

int main()
{
        cout << "Hello World" << endl;
        return 0;
}
> EOF
```

_____
Current task: 4

4. Добавьте этот файл в локальную копию репозитория.

script:
```shell
$ git add examples/hello_world.cpp
```

____
Current task: 5

5. Закоммитьте изменения с осмысленным сообщением.

script:
```shell
$ git commit examples/hello_world.cpp -m "was added code that prints 'Hello World'"
[main f23f377] was added code that prints 'Hello World'
 1 file changed, 13 insertions(+)
 create mode 100644 examples/hello_world.cpp
```
____
Current task: 6

6. Изменитьте исходный код так, чтобы программа через стандартный поток ввода запрашивалось имя пользователя. А в стандартный поток вывода печаталось сообщение Hello world from @name, где @name имя пользователя.

script:
```shell
$ nano examples/hello_world.cpp
```


____
Current task: 7

7. Закоммитьте новую версию программы. Почему не надо добавлять файл повторно git add?

script:
```shell
$ git commit examples/hello_world.cpp -m "file hello_world.cpp was changed"
[main fb13750] file hello_world.cpp was changed
 1 file changed, 1 insertion(+), 1 deletion(-)
```


____
Current task: 8

8. Запуште изменения в удалёный репозиторий.

script:
```shell
$ git push -u origin main
```



# Part 2

____
Current task: 1

1. В локальной копии репозитория создайте локальную ветку patch1.

script:
```shell
$ git branch patch1
$ git checkout patch1
M	README.md
Switched to branch 'patch1'
```


____
Current task: 2

2. Внесите изменения в ветке patch1 по исправлению кода и избавления от using namespace std;.

script:
```shell
$ nano examples/hello_world.cpp
```

_____
Current task: 3

3. commit, push локальную ветку в удалённый репозиторий.

script:
```shell
$ git add .
$ git commit -m "created new repository"
[patch1 64b8385] created new repository
 2 files changed, 19 insertions(+), 17 deletions(-)
$ git push -u origin patch1
Enumerating objects: 9, done.
Counting objects: 100% (9/9), done.
Compressing objects: 100% (5/5), done.
Writing objects: 100% (5/5), 859 bytes | 859.00 KiB/s, done.
Total 5 (delta 2), reused 0 (delta 0), pack-reused 0
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
remote: 
remote: Create a pull request for 'patch1' on GitHub by visiting:
remote:      https://github.com/Dzhamalay/lab02/pull/new/patch1
remote: 
To https://github.com/Dzhamalay/lab02
 * [new branch]      patch1 -> patch1
Branch 'patch1' set up to track remote branch 'patch1' from 'origin'.
```


____
Current task: 6

6. В локальной копии в ветке patch1 добавьте в исходный код комментарии.

script:
```shell
$ nano examples/hello_world.cpp
```
 
 
 ______
 Current task: 7
 
 7. 

script:
```shell
$ git add .
$ git commit -m "added commets to file hello_world.cpp"
[patch1 ae9a9de] added commets to file hello_world.cpp
 2 files changed, 81 insertions(+), 5 deletions(-)
$ git push -u origin patch1
Enumerating objects: 9, done.
Counting objects: 100% (9/9), done.
Compressing objects: 100% (5/5), done.
Writing objects: 100% (5/5), 1.33 KiB | 455.00 KiB/s, done.
Total 5 (delta 3), reused 0 (delta 0), pack-reused 0
remote: Resolving deltas: 100% (3/3), completed with 3 local objects.
To https://github.com/Dzhamalay/lab02
   64b8385..ae9a9de  patch1 -> patch1
Branch 'patch1' set up to track remote branch 'patch1' from 'origin'.
```


___
Current task: 10

10. Локально выполните pull.

script:
```shell
$ git pull
remote: Enumerating objects: 11, done.
remote: Counting objects: 100% (11/11), done.
remote: Compressing objects: 100% (5/5), done.
remote: Total 5 (delta 2), reused 0 (delta 0), pack-reused 0
Unpacking objects: 100% (5/5), 1.97 KiB | 1.97 MiB/s, done.
From https://github.com/Dzhamalay/lab02
   318ea48..db6a995  main       -> origin/main
Your configuration specifies to merge with the ref 'refs/heads/patch1'
from the remote, but no such ref was fetched.
```

____
Current task: 11

11. С помощью команды git log просмотрите историю в локальной версии ветки master

script:
```shell
$ git log
commit 318ea486ce9615da2a410efbaa21e64a8f6367b2 (HEAD -> main)
Author: Dzhamalay <dzamaevmansur@gmail.com>
Date:   Sun Mar 24 13:53:20 2024 +0300

    added file README.md

commit fb137501a345e01ea2be08155a4eb8d4c3bdd97e
Author: Dzhamalay <dzamaevmansur@gmail.com>
Date:   Sat Mar 23 23:16:57 2024 +0300

    file hello_world.cpp was changed

commit f23f377cbc202130236e2c764fd962bf8025f9fd
Author: Dzhamalay <dzamaevmansur@gmail.com>
Date:   Sat Mar 23 23:10:39 2024 +0300

    was added code that prints 'Hello World'

commit 01474cdd10c2b4ccdce351fe68e4bdd8e9417f60
Author: Dzhamalay <dzamaevmansur@gmail.com>
Date:   Sat Mar 23 22:45:09 2024 +0300

    added sorces
:
```


____
Current task: 12

12. Удалите локальную ветку patch1.

script:
```shell
$ git branch -D patch1
Deleted branch patch1 (was a2e20db).
```


# Part 3

Current task: 1

1. Создайте новую локальную ветку patch2.

```shell
$ git branch patch2
```

____
Current task: 2

2. Измените стиль кода с помощью утилиты clang-format . Например, используя вариант -style=Mozilla.

script:
```shell
$ clang-format -style=Mozilla examples/hello_world.cpp
```


____
Current task: 3

3. commit , push , создайте pull-request patch2 -> master.

```shell
$ git add .
$  git commit -m "changed codestyle in file hello_world.cpp"
[patch2 0b8df86] changed codestyle in file hello_world.cpp
 2 files changed, 32 insertions(+), 86 deletions(-)

======
$ git commit -m "added file .clang-format and changed the style of code"
[patch2 1049e35] added file .clang-format and changed the style of code
 5 files changed, 587 insertions(+), 13 deletions(-)
 create mode 100644 .clang-form
 create mode 100644 .clang-format
 create mode 100644 a.out
$ git push -u origin patch2
Enumerating objects: 11, done.
Counting objects: 100% (11/11), done.
Compressing objects: 100% (6/6), done.
Writing objects: 100% (7/7), 4.96 KiB | 1.65 MiB/s, done.
Total 7 (delta 1), reused 0 (delta 0), pack-reused 0
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
remote: 
remote: Create a pull request for 'patch2' on GitHub by visiting:
remote:      https://github.com/Dzhamalay/lab02/pull/new/patch2
remote: 
To https://github.com/Dzhamalay/lab02
 * [new branch]      patch2 -> patch2
Branch 'patch2' set up to track remote branch 'patch2' from 'origin'.
```


____
Current task: 6

6. Для этого локально выполните pull + rebase (точную последовательность команд, следует узнать самостоятельно). Исправьте конфликты.

script:
```shell

```




script:
```shell

```

