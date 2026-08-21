.class Lorg/cocos2dx/lua/AppActivity$6;
.super Ljava/lang/Object;
.source "AppActivity.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lorg/cocos2dx/lua/AppActivity;->buglyLog(Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic val$jsonParams:Ljava/lang/String;


# direct methods
.method constructor <init>(Ljava/lang/String;)V
    .locals 0

    .line 150
    iput-object p1, p0, Lorg/cocos2dx/lua/AppActivity$6;->val$jsonParams:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 5

    const-string v0, "bugly"

    .line 154
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    iget-object v2, p0, Lorg/cocos2dx/lua/AppActivity$6;->val$jsonParams:Ljava/lang/String;

    invoke-direct {v1, v2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string v2, "level"

    .line 155
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->getInt(Ljava/lang/String;)I

    move-result v2

    const-string v3, "tag"

    .line 156
    invoke-virtual {v1, v3}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    const-string v4, "log"

    .line 157
    invoke-virtual {v1, v4}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    if-eqz v2, :cond_4

    const/4 v4, 0x1

    if-eq v2, v4, :cond_3

    const/4 v4, 0x2

    if-eq v2, v4, :cond_2

    const/4 v4, 0x3

    if-eq v2, v4, :cond_1

    const/4 v4, 0x4

    if-eq v2, v4, :cond_0

    .line 175
    invoke-static {v3, v1}, Lcom/tencent/bugly/crashreport/BuglyLog;->v(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 172
    :cond_0
    invoke-static {v3, v1}, Lcom/tencent/bugly/crashreport/BuglyLog;->e(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 169
    :cond_1
    invoke-static {v3, v1}, Lcom/tencent/bugly/crashreport/BuglyLog;->w(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 166
    :cond_2
    invoke-static {v3, v1}, Lcom/tencent/bugly/crashreport/BuglyLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 163
    :cond_3
    invoke-static {v3, v1}, Lcom/tencent/bugly/crashreport/BuglyLog;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 160
    :cond_4
    invoke-static {v3, v1}, Lcom/tencent/bugly/crashreport/BuglyLog;->v(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    const-string v1, "buglyLog ok"

    .line 178
    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception v1

    .line 180
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "buglyLog:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    :goto_1
    return-void
.end method
