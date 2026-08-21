.class Lorg/cocos2dx/lua/AppActivity$2;
.super Ljava/lang/Object;
.source "AppActivity.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lorg/cocos2dx/lua/AppActivity;->initSDKYMN()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    .line 85
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    .line 88
    sget-object v0, Lorg/cocos2dx/lua/AppActivity;->mactivity:Lorg/cocos2dx/lua/AppActivity;

    const-string v1, "b666864bbf"

    const/4 v2, 0x0

    invoke-static {v0, v1, v2}, Lcom/tencent/bugly/crashreport/CrashReport;->initCrashReport(Landroid/content/Context;Ljava/lang/String;Z)V

    .line 89
    sget-object v0, Lorg/cocos2dx/lua/AppActivity;->mactivity:Lorg/cocos2dx/lua/AppActivity;

    invoke-static {v0}, Lorg/cocos2dx/lua/YmnSupport;->init(Landroid/app/Activity;)V

    return-void
.end method
