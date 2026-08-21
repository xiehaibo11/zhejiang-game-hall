.class final Lcom/mbridge/msdk/reward/adapter/d$f;
.super Lcom/mbridge/msdk/mbjscommon/c/b;
.source "RewardMVVideoAdapter.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/reward/adapter/d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "f"
.end annotation


# instance fields
.field private a:Lcom/mbridge/msdk/reward/adapter/d;

.field private b:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

.field private c:Ljava/lang/String;

.field private d:Ljava/lang/String;

.field private e:Lcom/mbridge/msdk/videocommon/a$a;

.field private f:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field private g:Z

.field private h:Z

.field private i:Lcom/mbridge/msdk/reward/adapter/d$c;

.field private j:Landroid/os/Handler;


# direct methods
.method public constructor <init>(Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/videocommon/a$a;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/reward/adapter/d;Lcom/mbridge/msdk/reward/adapter/d$c;Landroid/os/Handler;)V
    .locals 0

    .line 963
    invoke-direct {p0}, Lcom/mbridge/msdk/mbjscommon/c/b;-><init>()V

    .line 964
    iput-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$f;->b:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    .line 965
    iput-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d$f;->c:Ljava/lang/String;

    .line 966
    iput-object p3, p0, Lcom/mbridge/msdk/reward/adapter/d$f;->d:Ljava/lang/String;

    .line 967
    iput-object p4, p0, Lcom/mbridge/msdk/reward/adapter/d$f;->e:Lcom/mbridge/msdk/videocommon/a$a;

    if-eqz p6, :cond_0

    .line 970
    iput-object p6, p0, Lcom/mbridge/msdk/reward/adapter/d$f;->a:Lcom/mbridge/msdk/reward/adapter/d;

    .line 972
    :cond_0
    iput-object p5, p0, Lcom/mbridge/msdk/reward/adapter/d$f;->f:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 973
    iput-object p7, p0, Lcom/mbridge/msdk/reward/adapter/d$f;->i:Lcom/mbridge/msdk/reward/adapter/d$c;

    .line 974
    iput-object p8, p0, Lcom/mbridge/msdk/reward/adapter/d$f;->j:Landroid/os/Handler;

    return-void
.end method


# virtual methods
.method public final a(Landroid/webkit/WebView;I)V
    .locals 3

    .line 979
    iget-boolean p1, p0, Lcom/mbridge/msdk/reward/adapter/d$f;->h:Z

    if-nez p1, :cond_7

    .line 980
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$f;->i:Lcom/mbridge/msdk/reward/adapter/d$c;

    if-eqz p1, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/d$f;->j:Landroid/os/Handler;

    if-eqz v0, :cond_0

    .line 981
    invoke-virtual {v0, p1}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 985
    :cond_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/d$f;->d:Ljava/lang/String;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "_"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/d$f;->c:Ljava/lang/String;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 986
    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/d$f;->e:Lcom/mbridge/msdk/videocommon/a$a;

    const/4 v1, 0x1

    if-eqz v0, :cond_1

    .line 987
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/videocommon/a$a;->a(Z)V

    .line 989
    :cond_1
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v2, "type"

    .line 991
    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v2, "id"

    .line 992
    invoke-virtual {v0, v2, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "unitid"

    .line 993
    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/d$f;->d:Ljava/lang/String;

    invoke-virtual {v0, p1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 995
    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    .line 997
    :goto_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "Tempalte templete preload readyState state = "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "WindVaneWebView"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 998
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;

    move-result-object p1

    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d$f;->c:Ljava/lang/String;

    invoke-virtual {p1, p2, v1}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->setTemplatePreLoadDone(Ljava/lang/String;Z)V

    .line 1000
    invoke-static {}, Lcom/mbridge/msdk/videocommon/a/a;->a()Lcom/mbridge/msdk/videocommon/a/a;

    move-result-object p1

    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d$f;->d:Ljava/lang/String;

    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/d$f;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/adapter/d;->h(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v0

    invoke-virtual {p1, p2, v1, v0}, Lcom/mbridge/msdk/videocommon/a/a;->a(Ljava/lang/String;IZ)Ljava/util/List;

    .line 1012
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$f;->a:Lcom/mbridge/msdk/reward/adapter/d;

    if-eqz p1, :cond_3

    invoke-static {p1}, Lcom/mbridge/msdk/reward/adapter/d;->p(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result p1

    if-eqz p1, :cond_3

    .line 1013
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$f;->f:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isBidCampaign()Z

    move-result p1

    if-eqz p1, :cond_2

    const-string p1, "WindVaneWebView"

    const-string p2, "Tempalte put templeteCache in bidIVCache "

    .line 1014
    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    const/16 p1, 0x11f

    .line 1015
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d$f;->f:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object p2

    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/d$f;->e:Lcom/mbridge/msdk/videocommon/a$a;

    invoke-static {p1, p2, v0}, Lcom/mbridge/msdk/videocommon/a;->a(ILjava/lang/String;Lcom/mbridge/msdk/videocommon/a$a;)V

    goto :goto_1

    :cond_2
    const-string p1, "WindVaneWebView"

    const-string p2, "Tempalte put templeteCache in iVCache "

    .line 1017
    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    .line 1023
    :cond_3
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$f;->f:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isBidCampaign()Z

    move-result p1

    if-eqz p1, :cond_4

    const-string p1, "WindVaneWebView"

    const-string p2, "Tempalte put templeteCache in bidRVCache "

    .line 1024
    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    const/16 p1, 0x5e

    .line 1025
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d$f;->f:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object p2

    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/d$f;->e:Lcom/mbridge/msdk/videocommon/a$a;

    invoke-static {p1, p2, v0}, Lcom/mbridge/msdk/videocommon/a;->a(ILjava/lang/String;Lcom/mbridge/msdk/videocommon/a$a;)V

    goto :goto_1

    :cond_4
    const-string p1, "WindVaneWebView"

    const-string p2, "Tempalte put templeteCache in rVCache "

    .line 1027
    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :goto_1
    :try_start_1
    const-string p1, "WindVaneWebView"

    const-string p2, "Tempalte TempalteWindVaneWebviewClient tempalte load SUCCESS "

    .line 1034
    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1035
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$f;->a:Lcom/mbridge/msdk/reward/adapter/d;

    if-eqz p1, :cond_6

    .line 1036
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$f;->a:Lcom/mbridge/msdk/reward/adapter/d;

    monitor-enter p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    :try_start_2
    const-string p2, "WindVaneWebView"

    const-string v0, "Tempalte adapter 341"

    .line 1037
    invoke-static {p2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1038
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d$f;->a:Lcom/mbridge/msdk/reward/adapter/d;

    if-eqz p2, :cond_5

    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d$f;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-virtual {p2}, Lcom/mbridge/msdk/reward/adapter/d;->b()Z

    move-result p2

    if-eqz p2, :cond_5

    const-string p2, "WindVaneWebView"

    const-string v0, "Tempalte TempalteWindVaneWebviewClient tempalte load  callback success"

    .line 1039
    invoke-static {p2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1040
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d$f;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p2}, Lcom/mbridge/msdk/reward/adapter/d;->k(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/os/Handler;

    move-result-object p2

    if-eqz p2, :cond_5

    .line 1041
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object p2

    const/4 v0, 0x6

    .line 1042
    iput v0, p2, Landroid/os/Message;->what:I

    const-string v0, "WindVaneWebView"

    const-string v2, "WHAT_ON_RES_LOAD_SUCCESS Template"

    .line 1043
    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1044
    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/d$f;->f:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iput-object v0, p2, Landroid/os/Message;->obj:Ljava/lang/Object;

    .line 1045
    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/d$f;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/adapter/d;->k(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/os/Handler;

    move-result-object v0

    invoke-virtual {v0, p2}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 1046
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d$f;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p2}, Lcom/mbridge/msdk/reward/adapter/d;->k(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/os/Handler;

    move-result-object p2

    const/4 v0, 0x5

    invoke-virtual {p2, v0}, Landroid/os/Handler;->removeMessages(I)V

    const/4 p2, 0x0

    .line 1047
    iput-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d$f;->a:Lcom/mbridge/msdk/reward/adapter/d;

    .line 1050
    :cond_5
    monitor-exit p1

    goto :goto_2

    :catchall_0
    move-exception p2

    monitor-exit p1
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    :try_start_3
    throw p2

    :cond_6
    const-string p1, "WindVaneWebView"

    const-string p2, "Tempalte TempalteWindVaneWebviewClient tempalte load SUCCESS  mRewardMVVideoAdapter is null"

    .line 1052
    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    goto :goto_2

    :catchall_1
    move-exception p1

    .line 1055
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    const-string v0, "WindVaneWebView"

    invoke-static {v0, p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    .line 1057
    :goto_2
    iput-boolean v1, p0, Lcom/mbridge/msdk/reward/adapter/d$f;->h:Z

    :cond_7
    return-void
.end method

.method public final a(Landroid/webkit/WebView;ILjava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 1072
    invoke-super {p0, p1, p2, p3, p4}, Lcom/mbridge/msdk/mbjscommon/c/b;->a(Landroid/webkit/WebView;ILjava/lang/String;Ljava/lang/String;)V

    :try_start_0
    const-string p1, "WindVaneWebView"

    const-string p2, "Tempalte TempalteWindVaneWebviewClient tempalte load failed"

    .line 1074
    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1075
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$f;->a:Lcom/mbridge/msdk/reward/adapter/d;

    if-eqz p1, :cond_0

    .line 1076
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$f;->a:Lcom/mbridge/msdk/reward/adapter/d;

    monitor-enter p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    const-string p2, "WindVaneWebView"

    const-string v0, "Tempalte TempalteWindVaneWebviewClient tempalte load callback failed"

    .line 1077
    invoke-static {p2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1078
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d$f;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p2, p3, p4}, Lcom/mbridge/msdk/reward/adapter/d;->a(Lcom/mbridge/msdk/reward/adapter/d;Ljava/lang/String;Ljava/lang/String;)V

    const/4 p2, 0x0

    .line 1079
    iput-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d$f;->a:Lcom/mbridge/msdk/reward/adapter/d;

    .line 1080
    monitor-exit p1

    goto :goto_0

    :catchall_0
    move-exception p2

    monitor-exit p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :try_start_2
    throw p2
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    :catchall_1
    move-exception p1

    .line 1083
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    const-string p3, "WindVaneWebView"

    invoke-static {p3, p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public final a(Landroid/webkit/WebView;Ljava/lang/String;)V
    .locals 0

    .line 1063
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/mbjscommon/c/b;->a(Landroid/webkit/WebView;Ljava/lang/String;)V

    .line 1064
    iget-boolean p2, p0, Lcom/mbridge/msdk/reward/adapter/d$f;->g:Z

    if-nez p2, :cond_0

    .line 1065
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Landroid/webkit/WebView;)V

    const/4 p1, 0x1

    .line 1066
    iput-boolean p1, p0, Lcom/mbridge/msdk/reward/adapter/d$f;->g:Z

    :cond_0
    return-void
.end method
