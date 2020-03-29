int main(object me, string arg)
{
    if (!wizardp(me)) return 0;

    // todo 玩家存档处理

    shutdown(0);
    return 1;
}

int help(object me)
{
    write(@HELP
指令格式: shutdown

马上重新起动游戏。

HELP);
    return 1;
}
