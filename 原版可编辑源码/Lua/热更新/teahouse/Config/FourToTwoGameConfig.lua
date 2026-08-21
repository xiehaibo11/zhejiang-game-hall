local FourToTwoGameConfig = {}

FourToTwoGameConfig.CommendedGame = {
    [XH.LOBBY_ID.HANGMAQUAN] = {
        --杭州麻将
        [30145] = {cont={[1]=8 }, bIsPlayerLock=true, bIsCountLock=true, type=0, data="isOpenJoker='0';startBankerNum='3';sanTanContract='0';gameHuType='0';basescore='3';PayType='0';isQueYiMen='1';isPungBuChow='0';caiTiGang='1';IsJokerBaoTou='1';setPungAsChow='0';isSuiJiFengWei='0';CanAhead='0';usePropType='0';ZhRule='白板财神,笃三老庄,不可吃三摊,自摸胡,3,冠军消耗,缺一门,有财必拷响';isFourToTewo='1';", gameid=30145, base=3, tableCnt=1, name="杭州麻将", nPlayerSize={[1]=2 },},
        [30135] = {cont={[1]=999 }, bIsPlayerLock=true, bIsCountLock=true, type=0, data="bShaoMao='1';BaseJinType='3';PayType='0';isSuiJiFengWei='0';usePropType='4';ZhRule='烧毛,5分,冠军消耗';isFourToTewo='1';", gameid=30135, base=1, tableCnt=1, name="临安麻将", nPlayerSize={[1]=2 } },
        [30151] = {cont={[1]=8 }, bIsPlayerLock=true, bIsCountLock=true, type=0, data="basescore='5';isRandomJoker='0';PayType='0';isSuiJiFengWei='0';ZhRule='5,白板财神,冠军消耗';isFourToTewo='1';", gameid=30151, base=5, tableCnt=1, name="建德麻将", nPlayerSize={[1]=2 } },
        [30137] = {cont={[1]=8 }, bIsPlayerLock=true, bIsCountLock=true, type=0, data="sanTanContract='0';gameHuType='0';basescore='2';PayType='0';isQueYiMen='1';buPungBuChow='0';defenderLimit='0';setPungAsChow='0';caiTiGang='1';IsJokerBaoTou='0';isSuiJiFengWei='0';ZhRule='不可吃三摊,自摸胡,2,冠军消耗,缺一门';isFourToTewo='1';", gameid=30137, base=2, tableCnt=1, name="淳安麻将", nPlayerSize={[1]=2 } },
        [30142] = {cont={[1]=8 }, bIsPlayerLock=true, bIsCountLock=true, type=0, data="gametype='9';EndTypeMut='1';gamezhang='1';basescore='2';PayType='0';HaveMingPai='0';NeedSwapSeat='0';ChaoDi='0';HaveNoDouble='0';LmtMarker='1';ZhRule='经典,1,2,4倍,1张分,2,冠军消耗,禁用记牌器';isFourToTewo='1';", gameid=30142, base=2, tableCnt=1, name="杭州双扣", nPlayerSize={[1]=2 } },
        [30388] = {cont={[1]=8 }, bIsPlayerLock=true, bIsCountLock=true, type=0, data="gametype='12';EndTypeMut='1';GongConfigType='3';gamezhang='6';basescore='2';PayType='0';LmtMarker='1';playtype='0';HaveOpenCard='1';HaveNoDouble='1';ChaoDi='0';HaveMingPai='0';NeedSwapSeat='0';ZhRule='大小王,1,2,4倍,5线1,6线2,7线4,8线8…12线128分,6张发,2,冠军消耗,禁用记牌器';isFourToTewo='1';", gameid=30388, base=2, tableCnt=1, name="建德双扣", nPlayerSize={[1]=2 } },
    },
    [XH.LOBBY_ID.WENZHOU] = {
        [30314] = {cont={[1]=8 }, bIsPlayerLock=true, bIsCountLock=true, type=0, data="PayType='2';BaseScore='0';HaveMDDi='1';HaveGangSuanFen='0';HaveGangShangHua='0';NotHaveZhongFa='0';HaveThreeBack='0';HaveFollowMah='0';BanQing='0';QingYiSe='0';DelColor='0';JiaBei='0';CanContinue='1';ContinueKeepTime='3600';ZhRule='冠军消耗,普通1234,买,顶底加倍,允许续桌';", gameid=30314, base=0, tableCnt=1, name="温州麻将", nPlayerSize={[1]=2 } },
    }
}

return FourToTwoGameConfig