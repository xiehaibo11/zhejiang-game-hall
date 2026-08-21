.class final Lcom/tkay/expressad/reward/a/d$j;
.super Lcom/tkay/expressad/atsignalcommon/a/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/reward/a/d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "j"
.end annotation


# static fields
.field public static final a:I = 0x0

.field public static final b:I = 0x1


# instance fields
.field private c:Lcom/tkay/expressad/reward/a/d;

.field private e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

.field private f:Ljava/lang/String;

.field private g:Ljava/lang/String;

.field private h:Lcom/tkay/expressad/videocommon/a$a;

.field private i:Lcom/tkay/expressad/foundation/d/c;

.field private j:Z

.field private k:Z

.field private l:Lcom/tkay/expressad/reward/a/d$h;

.field private m:Landroid/os/Handler;


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/videocommon/a$a;Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/reward/a/d;Lcom/tkay/expressad/reward/a/d$h;Landroid/os/Handler;)V
    .locals 0

    .line 950
    invoke-direct {p0}, Lcom/tkay/expressad/atsignalcommon/a/b;-><init>()V

    .line 951
    iput-object p1, p0, Lcom/tkay/expressad/reward/a/d$j;->e:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 952
    iput-object p2, p0, Lcom/tkay/expressad/reward/a/d$j;->f:Ljava/lang/String;

    .line 953
    iput-object p3, p0, Lcom/tkay/expressad/reward/a/d$j;->g:Ljava/lang/String;

    .line 954
    iput-object p4, p0, Lcom/tkay/expressad/reward/a/d$j;->h:Lcom/tkay/expressad/videocommon/a$a;

    if-eqz p6, :cond_0

    .line 957
    iput-object p6, p0, Lcom/tkay/expressad/reward/a/d$j;->c:Lcom/tkay/expressad/reward/a/d;

    .line 959
    :cond_0
    iput-object p5, p0, Lcom/tkay/expressad/reward/a/d$j;->i:Lcom/tkay/expressad/foundation/d/c;

    .line 960
    iput-object p7, p0, Lcom/tkay/expressad/reward/a/d$j;->l:Lcom/tkay/expressad/reward/a/d$h;

    .line 961
    iput-object p8, p0, Lcom/tkay/expressad/reward/a/d$j;->m:Landroid/os/Handler;

    return-void
.end method


# virtual methods
.method public final onPageFinished(Landroid/webkit/WebView;Ljava/lang/String;)V
    .locals 0

    .line 1051
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/atsignalcommon/a/b;->onPageFinished(Landroid/webkit/WebView;Ljava/lang/String;)V

    .line 1052
    iget-boolean p2, p0, Lcom/tkay/expressad/reward/a/d$j;->j:Z

    if-nez p2, :cond_0

    .line 1053
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    invoke-static {p1}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->b(Landroid/webkit/WebView;)V

    const/4 p1, 0x1

    .line 1054
    iput-boolean p1, p0, Lcom/tkay/expressad/reward/a/d$j;->j:Z

    :cond_0
    return-void
.end method

.method public final onReceivedError(Landroid/webkit/WebView;ILjava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 1060
    invoke-super {p0, p1, p2, p3, p4}, Lcom/tkay/expressad/atsignalcommon/a/b;->onReceivedError(Landroid/webkit/WebView;ILjava/lang/String;Ljava/lang/String;)V

    .line 1063
    :try_start_0
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d$j;->c:Lcom/tkay/expressad/reward/a/d;

    if-eqz p1, :cond_0

    .line 1064
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d$j;->c:Lcom/tkay/expressad/reward/a/d;

    monitor-enter p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 1066
    :try_start_1
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/d$j;->c:Lcom/tkay/expressad/reward/a/d;

    invoke-static {p2, p3, p4}, Lcom/tkay/expressad/reward/a/d;->a(Lcom/tkay/expressad/reward/a/d;Ljava/lang/String;Ljava/lang/String;)V

    const/4 p2, 0x0

    .line 1067
    iput-object p2, p0, Lcom/tkay/expressad/reward/a/d$j;->c:Lcom/tkay/expressad/reward/a/d;

    .line 1068
    monitor-exit p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    return-void

    :catchall_0
    move-exception p2

    :try_start_2
    monitor-exit p1

    throw p2
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    :cond_0
    return-void

    :catchall_1
    move-exception p1

    .line 1071
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public final readyState(Landroid/webkit/WebView;I)V
    .locals 2

    .line 966
    iget-boolean p1, p0, Lcom/tkay/expressad/reward/a/d$j;->k:Z

    if-nez p1, :cond_6

    .line 967
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d$j;->l:Lcom/tkay/expressad/reward/a/d$h;

    if-eqz p1, :cond_0

    iget-object p2, p0, Lcom/tkay/expressad/reward/a/d$j;->m:Landroid/os/Handler;

    if-eqz p2, :cond_0

    .line 968
    invoke-virtual {p2, p1}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 972
    :cond_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object p2, p0, Lcom/tkay/expressad/reward/a/d$j;->g:Ljava/lang/String;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, "_"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p2, p0, Lcom/tkay/expressad/reward/a/d$j;->f:Ljava/lang/String;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 973
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/d$j;->h:Lcom/tkay/expressad/videocommon/a$a;

    const/4 v0, 0x1

    if-eqz p2, :cond_1

    .line 974
    invoke-virtual {p2, v0}, Lcom/tkay/expressad/videocommon/a$a;->a(Z)V

    .line 976
    :cond_1
    new-instance p2, Lorg/json/JSONObject;

    invoke-direct {p2}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "type"

    .line 978
    invoke-virtual {p2, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "id"

    .line 979
    invoke-virtual {p2, v1, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "unitid"

    .line 980
    iget-object v1, p0, Lcom/tkay/expressad/reward/a/d$j;->g:Ljava/lang/String;

    invoke-virtual {p2, p1, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 982
    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    .line 985
    :goto_0
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/j;->a()Lcom/tkay/expressad/videocommon/b/j;

    move-result-object p1

    iget-object p2, p0, Lcom/tkay/expressad/reward/a/d$j;->f:Ljava/lang/String;

    invoke-virtual {p1, p2, v0}, Lcom/tkay/expressad/videocommon/b/j;->c(Ljava/lang/String;Z)V

    .line 1000
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d$j;->c:Lcom/tkay/expressad/reward/a/d;

    if-eqz p1, :cond_2

    invoke-static {p1}, Lcom/tkay/expressad/reward/a/d;->m(Lcom/tkay/expressad/reward/a/d;)Z

    move-result p1

    if-eqz p1, :cond_2

    .line 1001
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d$j;->i:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->A()Z

    move-result p1

    if-eqz p1, :cond_3

    const/16 p1, 0x11f

    .line 1003
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/d$j;->i:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p2}, Lcom/tkay/expressad/foundation/d/c;->aa()Ljava/lang/String;

    move-result-object p2

    iget-object v1, p0, Lcom/tkay/expressad/reward/a/d$j;->h:Lcom/tkay/expressad/videocommon/a$a;

    invoke-static {p1, p2, v1}, Lcom/tkay/expressad/videocommon/a;->a(ILjava/lang/String;Lcom/tkay/expressad/videocommon/a$a;)V

    goto :goto_1

    .line 1011
    :cond_2
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d$j;->i:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->A()Z

    move-result p1

    if-eqz p1, :cond_3

    const/16 p1, 0x5e

    .line 1013
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/d$j;->i:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p2}, Lcom/tkay/expressad/foundation/d/c;->aa()Ljava/lang/String;

    move-result-object p2

    iget-object v1, p0, Lcom/tkay/expressad/reward/a/d$j;->h:Lcom/tkay/expressad/videocommon/a$a;

    invoke-static {p1, p2, v1}, Lcom/tkay/expressad/videocommon/a;->a(ILjava/lang/String;Lcom/tkay/expressad/videocommon/a$a;)V

    .line 1023
    :cond_3
    :goto_1
    :try_start_1
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d$j;->c:Lcom/tkay/expressad/reward/a/d;

    if-eqz p1, :cond_5

    .line 1024
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d$j;->c:Lcom/tkay/expressad/reward/a/d;

    monitor-enter p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    .line 1026
    :try_start_2
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/d$j;->c:Lcom/tkay/expressad/reward/a/d;

    if-eqz p2, :cond_4

    iget-object p2, p0, Lcom/tkay/expressad/reward/a/d$j;->c:Lcom/tkay/expressad/reward/a/d;

    invoke-virtual {p2}, Lcom/tkay/expressad/reward/a/d;->c()Z

    move-result p2

    if-eqz p2, :cond_4

    .line 1028
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/d$j;->c:Lcom/tkay/expressad/reward/a/d;

    invoke-static {p2}, Lcom/tkay/expressad/reward/a/d;->i(Lcom/tkay/expressad/reward/a/d;)Landroid/os/Handler;

    move-result-object p2

    if-eqz p2, :cond_4

    .line 1029
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object p2

    const/4 v1, 0x6

    .line 1030
    iput v1, p2, Landroid/os/Message;->what:I

    .line 1032
    iget-object v1, p0, Lcom/tkay/expressad/reward/a/d$j;->i:Lcom/tkay/expressad/foundation/d/c;

    iput-object v1, p2, Landroid/os/Message;->obj:Ljava/lang/Object;

    .line 1033
    iget-object v1, p0, Lcom/tkay/expressad/reward/a/d$j;->c:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v1}, Lcom/tkay/expressad/reward/a/d;->i(Lcom/tkay/expressad/reward/a/d;)Landroid/os/Handler;

    move-result-object v1

    invoke-virtual {v1, p2}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 1034
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/d$j;->c:Lcom/tkay/expressad/reward/a/d;

    invoke-static {p2}, Lcom/tkay/expressad/reward/a/d;->i(Lcom/tkay/expressad/reward/a/d;)Landroid/os/Handler;

    move-result-object p2

    const/4 v1, 0x5

    invoke-virtual {p2, v1}, Landroid/os/Handler;->removeMessages(I)V

    const/4 p2, 0x0

    .line 1035
    iput-object p2, p0, Lcom/tkay/expressad/reward/a/d$j;->c:Lcom/tkay/expressad/reward/a/d;

    .line 1038
    :cond_4
    monitor-exit p1
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_2

    :catchall_0
    move-exception p2

    :try_start_3
    monitor-exit p1

    throw p2
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    :catchall_1
    move-exception p1

    .line 1043
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    .line 1045
    :cond_5
    :goto_2
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/a/d$j;->k:Z

    :cond_6
    return-void
.end method
