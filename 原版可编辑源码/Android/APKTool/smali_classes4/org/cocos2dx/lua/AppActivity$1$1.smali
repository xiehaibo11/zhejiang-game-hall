.class Lorg/cocos2dx/lua/AppActivity$1$1;
.super Ljava/lang/Object;
.source "AppActivity.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lorg/cocos2dx/lua/AppActivity$1;->sendRepluginCodeAndMsg(ILjava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lorg/cocos2dx/lua/AppActivity$1;

.field final synthetic val$jsonObject:Lorg/json/JSONObject;


# direct methods
.method constructor <init>(Lorg/cocos2dx/lua/AppActivity$1;Lorg/json/JSONObject;)V
    .locals 0

    .line 72
    iput-object p1, p0, Lorg/cocos2dx/lua/AppActivity$1$1;->this$1:Lorg/cocos2dx/lua/AppActivity$1;

    iput-object p2, p0, Lorg/cocos2dx/lua/AppActivity$1$1;->val$jsonObject:Lorg/json/JSONObject;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    .line 76
    iget-object v0, p0, Lorg/cocos2dx/lua/AppActivity$1$1;->val$jsonObject:Lorg/json/JSONObject;

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "RepluginSDKCallBack"

    invoke-static {v1, v0}, Lorg/cocos2dx/lib/Cocos2dxLuaJavaBridge;->callLuaGlobalFunctionWithString(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method
