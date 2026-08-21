package com.bianfeng.gameloggyforweb;

import android.app.Activity;
import android.content.Context;
import com.bianfeng.splitscreenlib.YmnH5Callback;
import com.bianfeng.splitscreenlib.YmnH5GameSdk;
import com.bianfeng.ymnsdk.feature.YmnPluginWrapper;
import com.bianfeng.ymnsdk.feature.protocol.YFunction;
import com.bianfeng.ymnsdk.feature.protocol.YPlugin;
import com.bianfeng.ymnsdk.util.Logger;
import com.bianfeng.ymnsdk.utilslib.log.UtilsLogger;

/* JADX INFO: loaded from: classes.dex */
@YPlugin(entrance = YPlugin.Entrance.ACTIVITY, strategy = YPlugin.Policy.FORCE)
public class GameLoggyForWebInterface extends YmnPluginWrapper {
    private static final String ENTER_GAME = "h5game_enter_game";
    private static final String FINISH_GAME = "h5game_finish_game";
    private static final int FLAG_GAME_LOGOUT = 910011;
    private static final int FLAG_GAME_START = 910010;
    private static final int FULL_SCREEN = 910009;
    private static final int PAY_FAIL = 910007;
    private static final int PAY_SUCCESS = 910006;
    private static final int SPLIT_SCREEN = 910008;
    private static final int START_GAME_FINISH = 910005;
    private static final String START_GAME_LOGIN = "start_game_login";
    private static final int START_GAME_LOGIN_FAIL = 910004;
    private static final int START_GAME_LOGIN_SUCCESS = 910003;
    private static final String START_GAME_ROOM = "start_game_room";
    private static final int START_GAME_ROOM_CLOSE = 910002;
    private static final int START_GAME_ROOM_FAIL = 910001;
    private static final int START_GAME_ROOM_SUCCESS = 910000;
    private static final String START_GAME_ROOM_WEB = "start_game_room_web";
    private YmnH5Callback callback = new YmnH5Callback() { // from class: com.bianfeng.gameloggyforweb.GameLoggyForWebInterface.1
        @Override // com.bianfeng.splitscreenlib.YmnH5Callback
        public void onLoginSuccess() {
            Logger.i("onLoginSuccess");
            GameLoggyForWebInterface.this.sendResult(GameLoggyForWebInterface.START_GAME_LOGIN_SUCCESS, "登录成功");
        }

        @Override // com.bianfeng.splitscreenlib.YmnH5Callback
        public void onLoginFail(String str) {
            Logger.i("onLoginFail" + str);
            GameLoggyForWebInterface.this.sendResult(GameLoggyForWebInterface.START_GAME_LOGIN_FAIL, str);
        }

        @Override // com.bianfeng.splitscreenlib.YmnH5Callback
        public void onGameListFail(String str) {
            Logger.i("onGameListFail");
            GameLoggyForWebInterface.this.sendResult(GameLoggyForWebInterface.START_GAME_ROOM_FAIL, str);
        }

        @Override // com.bianfeng.splitscreenlib.YmnH5Callback
        public void onPaySuccess() {
            Logger.i("onPaySuccess");
            GameLoggyForWebInterface.this.sendResult(GameLoggyForWebInterface.PAY_SUCCESS, "支付成功");
        }

        @Override // com.bianfeng.splitscreenlib.YmnH5Callback
        public void onPayFail(String str) {
            Logger.i("onPayFail" + str);
            GameLoggyForWebInterface.this.sendResult(GameLoggyForWebInterface.PAY_FAIL, str);
        }

        @Override // com.bianfeng.splitscreenlib.YmnH5Callback
        public void onCloseGame() {
            Logger.i("onCloseGame");
            GameLoggyForWebInterface.this.sendResult(GameLoggyForWebInterface.START_GAME_FINISH, "退出游戏");
        }

        @Override // com.bianfeng.splitscreenlib.YmnH5Callback
        public void onCloseGameList() {
            Logger.i("onCloseGameList");
            GameLoggyForWebInterface.this.sendResult(GameLoggyForWebInterface.START_GAME_ROOM_CLOSE, "关闭列表");
        }

        @Override // com.bianfeng.splitscreenlib.YmnH5Callback
        public void onGameListSuccess() {
            Logger.i("onGameListSuccess");
            GameLoggyForWebInterface.this.sendResult(GameLoggyForWebInterface.START_GAME_ROOM_SUCCESS, "获取列表成功");
        }

        @Override // com.bianfeng.splitscreenlib.YmnH5Callback
        public void onSplitScreen() {
            Logger.i("onSplitScreen");
            GameLoggyForWebInterface.this.sendResult(GameLoggyForWebInterface.SPLIT_SCREEN, "分屏");
        }

        @Override // com.bianfeng.splitscreenlib.YmnH5Callback
        public void onFullScreen() {
            Logger.i("onFullScreen");
            GameLoggyForWebInterface.this.sendResult(GameLoggyForWebInterface.FULL_SCREEN, "全屏");
        }
    };

    @Override // com.bianfeng.ymnsdk.feature.protocol.IPlugin
    public String getPluginId() {
        return "134";
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IPlugin
    public String getPluginName() {
        return "gameloggyforweb";
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IPlugin
    public int getPluginVersion() {
        return 3;
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IPlugin
    public String getSdkVersion() {
        return "4.3.0";
    }

    @Override // com.bianfeng.ymnsdk.feature.YmnPluginWrapper, com.bianfeng.ymnsdk.feature.protocol.IPlugin
    public void onInit(Context context) {
        super.onInit(context);
        YmnH5GameSdk.getInstance().onCreate(getActivity());
    }

    @Override // com.bianfeng.ymnsdk.feature.YmnPluginWrapper
    public void onCreate(Activity activity) {
        super.onCreate(activity);
        UtilsLogger.setDebugLog(true);
        Logger.i("调到web大厅了 onCreate");
        YmnH5GameSdk.getInstance().onCreate(getActivity());
    }

    @YFunction(name = START_GAME_ROOM)
    public void startGameRoom(String str, String str2, String str3, String str4, String str5, String str6) {
        Logger.i("调到web大厅了" + str6);
        YmnH5GameSdk.getInstance().startGameRoomWeb(str, str2, str3, str4, str5, str6, this.callback);
    }

    @YFunction(name = START_GAME_LOGIN)
    public void startGameLogin(String str, String str2, String str3, String str4, String str5, String str6, String str7) {
        Logger.i("点击单款了");
        YmnH5GameSdk.getInstance().startGameLogin(str, str2, str3, str4, str5, str6, str7, this.callback);
    }

    @YFunction(name = ENTER_GAME)
    public void gameStart() {
        Logger.i("进入游戏");
        YmnH5GameSdk.getInstance().enterGame();
        sendResult(FLAG_GAME_START, "进入游戏");
    }

    @YFunction(name = FINISH_GAME)
    public void gameFinish() {
        Logger.i("结束游戏");
        YmnH5GameSdk.getInstance().finishGame();
        sendResult(FLAG_GAME_LOGOUT, "结束游戏");
    }

    @Override // com.bianfeng.ymnsdk.feature.YmnPluginWrapper, com.bianfeng.ymnsdk.feature.protocol.IPlugin
    public void onDestroy() {
        super.onDestroy();
        YmnH5GameSdk.getInstance().onDestory();
    }

    @Override // com.bianfeng.ymnsdk.feature.YmnPluginWrapper, com.bianfeng.ymnsdk.feature.protocol.IPlugin
    public void onResume() {
        super.onResume();
        Logger.i("onResume");
        YmnH5GameSdk.getInstance().onResume();
    }

    @Override // com.bianfeng.ymnsdk.feature.YmnPluginWrapper, com.bianfeng.ymnsdk.feature.protocol.IPlugin
    public void onWindowFocusChanged(boolean z, Activity activity) {
        super.onWindowFocusChanged(z, activity);
        YmnH5GameSdk.getInstance().onWindowFocusChanged(z, activity);
    }
}
