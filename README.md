## Laboratory work II

Current task: 1

1. Создайте пустой репозиторий на сервисе github.com (или gitlab.com, или bitbucket.com).


_____
Current task: 2

2. Выполните инструкцию по созданию первого коммита на странице репозитория, созданного на предыдещем шаге.

____
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
$ cat > examples/hello_world.cpp <<EOF
> #include <iostream>
#include <string>

using namespace std;

int main()
{
        cout << "Enter your name: ";
        string name;
        cin >> name;
        cout >> "Hello World from " << name << endl;
        return 0;
}
> EOF
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

8.

script:
```shell

```


____
Current task: 9

9.

script:
```shell

```


____
Current task: 10

10.

script:
```shell

```


____
Current task: 11

11.

script:
```shell

```

