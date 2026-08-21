.class Lorg/cocos2dx/lua/AppActivity$1;
.super Ljava/lang/Object;
.source "AppActivity.java"

# interfaces
.implements Lcom/ymnsdk/replugin/listener/RepluginListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lorg/cocos2dx/lua/AppActivity;->onCreate(Landroid/os/Bundle;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lorg/cocos2dx/lua/AppActivity;


# direct methods
.method constructor <init>(Lorg/cocos2dx/lua/AppActivity;)V
    .locals 0

    .line 62
    iput-object p1, p0, Lorg/cocos2dx/lua/AppActivity$1;->this$0:Lorg/cocos2dx/lua/AppActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public sendRepluginCodeAndMsg(ILjava/lang/String;)V
    .locals 2

    .line 65
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "code"

    .line 67
    invoke-virtual {v0, v1, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p1, "msg"

    .line 68
    invoke-virtual {v0, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 70
    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    .line 72
    :goto_0
    iget-object p1, p0, Lorg/cocos2dx/lua/AppActivity$1;->this$0:Lorg/cocos2dx/lua/AppActivity;

    new-instance p2, Lorg/cocos2dx/lua/AppActivity$1$1;

    invoke-direct {p2, p0, v0}, Lorg/cocos2dx/lua/AppActivity$1$1;-><init>(Lorg/cocos2dx/lua/AppActivity$1;Lorg/json/JSONObject;)V

    invoke-virtual {p1, p2}, Lorg/cocos2dx/lua/AppActivity;->runOnGLThread(Ljava/lang/Runnable;)V

    return-void
.end method
