.class public interface abstract Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;
.super Ljava/lang/Object;
.source "IPlugin.java"

# interfaces
.implements Ljava/io/Serializable;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin$STATE_NAME;
    }
.end annotation


# static fields
.field public static final STATE_CHECKING:I = -0x1

.field public static final STATE_CLOSED:I = 0x0

.field public static final STATE_EMPTY:I = -0xa

.field public static final STATE_INSTALLED:I = -0x3

.field public static final STATE_INSTALLING:I = -0x4

.field public static final STATE_PENDING_CHECK:I = -0x2

.field public static final STATE_PENDING_INSTALL:I = -0x5

.field public static final STATE_WORKING:I = 0x1


# virtual methods
.method public abstract callFunction(Ljava/lang/String;Ljava/util/LinkedHashMap;)V
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation
.end method

.method public varargs abstract callFunction(Ljava/lang/String;[Ljava/lang/String;)V
.end method

.method public abstract callFunctionWithResult(Ljava/lang/String;Ljava/util/LinkedHashMap;)Ljava/lang/String;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)",
            "Ljava/lang/String;"
        }
    .end annotation
.end method

.method public varargs abstract callFunctionWithResult(Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/String;
.end method

.method public abstract getPluginId()Ljava/lang/String;
.end method

.method public abstract getPluginName()Ljava/lang/String;
.end method

.method public abstract getPluginVersion()I
.end method

.method public abstract getSdkVersion()Ljava/lang/String;
.end method

.method public abstract isDebugMode()Z
.end method

.method public abstract isSupportFunction(Ljava/lang/String;)Z
.end method

.method public abstract onActivityResult(IILandroid/content/Intent;)V
.end method

.method public abstract onDestroy()V
.end method

.method public abstract onInit(Landroid/content/Context;)V
.end method

.method public abstract onLogin(Ljava/util/Map;)V
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation
.end method

.method public abstract onNewIntent(Landroid/content/Intent;)V
.end method

.method public abstract onPause()V
.end method

.method public abstract onPay(Ljava/util/Map;)V
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation
.end method

.method public abstract onRestart()V
.end method

.method public abstract onResume()V
.end method

.method public abstract onStart()V
.end method

.method public abstract onStop()V
.end method

.method public abstract onWindowFocusChanged(ZLandroid/app/Activity;)V
.end method

.method public abstract setDebugMode(Z)V
.end method
