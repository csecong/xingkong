#include <stdio.h>
#include <ansi.h>

int look_room(object me, object env);

int main(object me, string arg)
{
    object obj;
    int result;
    result = look_room(me, environment(me));

    return result;
}

int look_room(object me, object env)
{
    mapping exits;
    string str, *dirs;

    str = strlen("123123");

    write(str);
    return 1;
}
