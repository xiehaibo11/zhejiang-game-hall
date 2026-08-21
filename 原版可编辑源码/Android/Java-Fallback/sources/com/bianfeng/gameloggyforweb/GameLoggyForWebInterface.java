package com.bianfeng.gameloggyforweb;

@com.bianfeng.ymnsdk.feature.protocol.YPlugin(entrance = com.bianfeng.ymnsdk.feature.protocol.YPlugin.Entrance.ACTIVITY, strategy = com.bianfeng.ymnsdk.feature.protocol.YPlugin.Policy.FORCE)
public class GameLoggyForWebInterface extends com.bianfeng.ymnsdk.feature.YmnPluginWrapper {
    private static final java.lang.String ENTER_GAME = "h5game_enter_game";
    private static final java.lang.String FINISH_GAME = "h5game_finish_game";
    private static final int FLAG_GAME_LOGOUT = 910011;
    private static final int FLAG_GAME_START = 910010;
    private static final int FULL_SCREEN = 910009;
    private static final int PAY_FAIL = 910007;
    private static final int PAY_SUCCESS = 910006;
    private static final int SPLIT_SCREEN = 910008;
    private static final int START_GAME_FINISH = 910005;
    private static final java.lang.String START_GAME_LOGIN = "start_game_login";
    private static final int START_GAME_LOGIN_FAIL = 910004;
    private static final int START_GAME_LOGIN_SUCCESS = 910003;
    private static final java.lang.String START_GAME_ROOM = "start_game_room";
    private static final int START_GAME_ROOM_CLOSE = 910002;
    private static final int START_GAME_ROOM_FAIL = 910001;
    private static final int START_GAME_ROOM_SUCCESS = 910000;
    private static final java.lang.String START_GAME_ROOM_WEB = "start_game_room_web";
    private com.bianfeng.splitscreenlib.YmnH5Callback callback;


    public GameLoggyForWebInterface() {
            r1 = this;
            r1.<init>()
            com.bianfeng.gameloggyforweb.GameLoggyForWebInterface$1 r0 = new com.bianfeng.gameloggyforweb.GameLoggyForWebInterface$1
            r0.<init>(r1)
            r1.callback = r0
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "h5game_finish_game")
    public void gameFinish() {
            r2 = this;
            java.lang.String r0 = "结束游戏"
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            com.bianfeng.splitscreenlib.YmnH5GameSdk r1 = com.bianfeng.splitscreenlib.YmnH5GameSdk.getInstance()
            r1.finishGame()
            r1 = 910011(0xde2bb, float:1.275197E-39)
            r2.sendResult(r1, r0)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "h5game_enter_game")
    public void gameStart() {
            r2 = this;
            java.lang.String r0 = "进入游戏"
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            com.bianfeng.splitscreenlib.YmnH5GameSdk r1 = com.bianfeng.splitscreenlib.YmnH5GameSdk.getInstance()
            r1.enterGame()
            r1 = 910010(0xde2ba, float:1.275196E-39)
            r2.sendResult(r1, r0)
            return
    }

    @Override
    public java.lang.String getPluginId() {
            r1 = this;
            java.lang.String r0 = "134"
            return r0
    }

    @Override
    public java.lang.String getPluginName() {
            r1 = this;
            java.lang.String r0 = "gameloggyforweb"
            return r0
    }

    @Override
    public int getPluginVersion() {
            r1 = this;
            r0 = 3
            return r0
    }

    @Override
    public java.lang.String getSdkVersion() {
            r1 = this;
            java.lang.String r0 = "4.3.0"
            return r0
    }

    @Override
    public void onCreate(android.app.Activity r2) {
            r1 = this;
            super.onCreate(r2)
            r2 = 1
            com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.setDebugLog(r2)
            java.lang.String r2 = "调到web大厅了 onCreate"
            com.bianfeng.ymnsdk.util.Logger.i(r2)
            com.bianfeng.splitscreenlib.YmnH5GameSdk r2 = com.bianfeng.splitscreenlib.YmnH5GameSdk.getInstance()
            android.app.Activity r0 = r1.getActivity()
            r2.onCreate(r0)
            return
    }

    @Override
    public void onDestroy() {
            r1 = this;
            super.onDestroy()
            com.bianfeng.splitscreenlib.YmnH5GameSdk r0 = com.bianfeng.splitscreenlib.YmnH5GameSdk.getInstance()
            r0.onDestory()
            return
    }

    @Override
    public void onInit(android.content.Context r2) {
            r1 = this;
            super.onInit(r2)
            com.bianfeng.splitscreenlib.YmnH5GameSdk r2 = com.bianfeng.splitscreenlib.YmnH5GameSdk.getInstance()
            android.app.Activity r0 = r1.getActivity()
            r2.onCreate(r0)
            return
    }

    @Override
    public void onResume() {
            r1 = this;
            super.onResume()
            java.lang.String r0 = "onResume"
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            com.bianfeng.splitscreenlib.YmnH5GameSdk r0 = com.bianfeng.splitscreenlib.YmnH5GameSdk.getInstance()
            r0.onResume()
            return
    }

    @Override
    public void onWindowFocusChanged(boolean r2, android.app.Activity r3) {
            r1 = this;
            super.onWindowFocusChanged(r2, r3)
            com.bianfeng.splitscreenlib.YmnH5GameSdk r0 = com.bianfeng.splitscreenlib.YmnH5GameSdk.getInstance()
            r0.onWindowFocusChanged(r2, r3)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "start_game_login")
    public void startGameLogin(java.lang.String r11, java.lang.String r12, java.lang.String r13, java.lang.String r14, java.lang.String r15, java.lang.String r16, java.lang.String r17) {
            r10 = this;
            java.lang.String r0 = "点击单款了"
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            com.bianfeng.splitscreenlib.YmnH5GameSdk r1 = com.bianfeng.splitscreenlib.YmnH5GameSdk.getInstance()
            r0 = r10
            com.bianfeng.splitscreenlib.YmnH5Callback r9 = r0.callback
            r2 = r11
            r3 = r12
            r4 = r13
            r5 = r14
            r6 = r15
            r7 = r16
            r8 = r17
            r1.startGameLogin(r2, r3, r4, r5, r6, r7, r8, r9)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "start_game_room")
    public void startGameRoom(java.lang.String r10, java.lang.String r11, java.lang.String r12, java.lang.String r13, java.lang.String r14, java.lang.String r15) {
            r9 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "调到web大厅了"
            r0.append(r1)
            r0.append(r15)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            com.bianfeng.splitscreenlib.YmnH5GameSdk r1 = com.bianfeng.splitscreenlib.YmnH5GameSdk.getInstance()
            com.bianfeng.splitscreenlib.YmnH5Callback r8 = r9.callback
            r2 = r10
            r3 = r11
            r4 = r12
            r5 = r13
            r6 = r14
            r7 = r15
            r1.startGameRoomWeb(r2, r3, r4, r5, r6, r7, r8)
            return
    }
}
