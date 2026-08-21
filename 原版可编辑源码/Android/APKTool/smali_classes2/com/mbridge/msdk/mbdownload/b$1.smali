.class final Lcom/mbridge/msdk/mbdownload/b$1;
.super Ljava/lang/Object;
.source "DownloadAgent.java"

# interfaces
.implements Landroid/content/ServiceConnection;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/mbdownload/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/mbdownload/b;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/mbdownload/b;)V
    .locals 0

    .line 212
    iput-object p1, p0, Lcom/mbridge/msdk/mbdownload/b$1;->a:Lcom/mbridge/msdk/mbdownload/b;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onServiceConnected(Landroid/content/ComponentName;Landroid/os/IBinder;)V
    .locals 6

    .line 215
    invoke-static {}, Lcom/mbridge/msdk/mbdownload/b;->a()Ljava/lang/String;

    move-result-object p1

    const-string v0, "ServiceConnection.onServiceConnected"

    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 216
    iget-object p1, p0, Lcom/mbridge/msdk/mbdownload/b$1;->a:Lcom/mbridge/msdk/mbdownload/b;

    new-instance v0, Landroid/os/Messenger;

    invoke-direct {v0, p2}, Landroid/os/Messenger;-><init>(Landroid/os/IBinder;)V

    invoke-static {p1, v0}, Lcom/mbridge/msdk/mbdownload/b;->a(Lcom/mbridge/msdk/mbdownload/b;Landroid/os/Messenger;)Landroid/os/Messenger;

    const/4 p1, 0x0

    const/4 p2, 0x4

    .line 218
    :try_start_0
    invoke-static {p1, p2}, Landroid/os/Message;->obtain(Landroid/os/Handler;I)Landroid/os/Message;

    move-result-object p1

    .line 219
    new-instance p2, Lcom/mbridge/msdk/mbdownload/b$a;

    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/b$1;->a:Lcom/mbridge/msdk/mbdownload/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/b;->d(Lcom/mbridge/msdk/mbdownload/b;)Ljava/lang/String;

    move-result-object v1

    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/b$1;->a:Lcom/mbridge/msdk/mbdownload/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/b;->e(Lcom/mbridge/msdk/mbdownload/b;)Ljava/lang/String;

    move-result-object v2

    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/b$1;->a:Lcom/mbridge/msdk/mbdownload/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/b;->f(Lcom/mbridge/msdk/mbdownload/b;)Ljava/lang/String;

    move-result-object v3

    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/b$1;->a:Lcom/mbridge/msdk/mbdownload/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/b;->g(Lcom/mbridge/msdk/mbdownload/b;)Ljava/lang/String;

    move-result-object v4

    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/b$1;->a:Lcom/mbridge/msdk/mbdownload/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/b;->h(Lcom/mbridge/msdk/mbdownload/b;)Z

    move-result v5

    move-object v0, p2

    invoke-direct/range {v0 .. v5}, Lcom/mbridge/msdk/mbdownload/b$a;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V

    .line 220
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/b$1;->a:Lcom/mbridge/msdk/mbdownload/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/b;->i(Lcom/mbridge/msdk/mbdownload/b;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p2, Lcom/mbridge/msdk/mbdownload/b$a;->e:Ljava/lang/String;

    .line 221
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/b$1;->a:Lcom/mbridge/msdk/mbdownload/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/b;->j(Lcom/mbridge/msdk/mbdownload/b;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p2, Lcom/mbridge/msdk/mbdownload/b$a;->f:Ljava/lang/String;

    .line 222
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/b$1;->a:Lcom/mbridge/msdk/mbdownload/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/b;->k(Lcom/mbridge/msdk/mbdownload/b;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p2, Lcom/mbridge/msdk/mbdownload/b$a;->a:Ljava/lang/String;

    .line 223
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/b$1;->a:Lcom/mbridge/msdk/mbdownload/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/b;->l(Lcom/mbridge/msdk/mbdownload/b;)[Ljava/lang/String;

    move-result-object v0

    iput-object v0, p2, Lcom/mbridge/msdk/mbdownload/b$a;->k:[Ljava/lang/String;

    .line 224
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/b$1;->a:Lcom/mbridge/msdk/mbdownload/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/b;->m(Lcom/mbridge/msdk/mbdownload/b;)[Ljava/lang/String;

    move-result-object v0

    iput-object v0, p2, Lcom/mbridge/msdk/mbdownload/b$a;->m:[Ljava/lang/String;

    .line 225
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/b$1;->a:Lcom/mbridge/msdk/mbdownload/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/b;->n(Lcom/mbridge/msdk/mbdownload/b;)[Ljava/lang/String;

    move-result-object v0

    iput-object v0, p2, Lcom/mbridge/msdk/mbdownload/b$a;->n:[Ljava/lang/String;

    .line 226
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/b$1;->a:Lcom/mbridge/msdk/mbdownload/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/b;->o(Lcom/mbridge/msdk/mbdownload/b;)[Ljava/lang/String;

    move-result-object v0

    iput-object v0, p2, Lcom/mbridge/msdk/mbdownload/b$a;->o:[Ljava/lang/String;

    .line 227
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/b$1;->a:Lcom/mbridge/msdk/mbdownload/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/b;->p(Lcom/mbridge/msdk/mbdownload/b;)[Ljava/lang/String;

    move-result-object v0

    iput-object v0, p2, Lcom/mbridge/msdk/mbdownload/b$a;->p:[Ljava/lang/String;

    .line 228
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/b$1;->a:Lcom/mbridge/msdk/mbdownload/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/b;->q(Lcom/mbridge/msdk/mbdownload/b;)[Ljava/lang/String;

    move-result-object v0

    iput-object v0, p2, Lcom/mbridge/msdk/mbdownload/b$a;->l:[Ljava/lang/String;

    .line 229
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/b$1;->a:Lcom/mbridge/msdk/mbdownload/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/b;->r(Lcom/mbridge/msdk/mbdownload/b;)Z

    move-result v0

    iput-boolean v0, p2, Lcom/mbridge/msdk/mbdownload/b$a;->q:Z

    .line 230
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/b$1;->a:Lcom/mbridge/msdk/mbdownload/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/b;->s(Lcom/mbridge/msdk/mbdownload/b;)Z

    move-result v0

    iput-boolean v0, p2, Lcom/mbridge/msdk/mbdownload/b$a;->r:Z

    .line 231
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/b$1;->a:Lcom/mbridge/msdk/mbdownload/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/b;->t(Lcom/mbridge/msdk/mbdownload/b;)Z

    move-result v0

    iput-boolean v0, p2, Lcom/mbridge/msdk/mbdownload/b$a;->s:Z

    .line 232
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/b$1;->a:Lcom/mbridge/msdk/mbdownload/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/b;->u(Lcom/mbridge/msdk/mbdownload/b;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p2, Lcom/mbridge/msdk/mbdownload/b$a;->j:Ljava/lang/String;

    .line 233
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/b$1;->a:Lcom/mbridge/msdk/mbdownload/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/b;->v(Lcom/mbridge/msdk/mbdownload/b;)Z

    move-result v0

    iput-boolean v0, p2, Lcom/mbridge/msdk/mbdownload/b$a;->i:Z

    .line 1352
    new-instance v0, Landroid/os/Bundle;

    invoke-direct {v0}, Landroid/os/Bundle;-><init>()V

    const-string v1, "mComponentName"

    .line 1353
    iget-object v2, p2, Lcom/mbridge/msdk/mbdownload/b$a;->b:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string v1, "mTitle"

    .line 1354
    iget-object v2, p2, Lcom/mbridge/msdk/mbdownload/b$a;->c:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string v1, "mUrl"

    .line 1355
    iget-object v2, p2, Lcom/mbridge/msdk/mbdownload/b$a;->d:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string v1, "mMd5"

    .line 1356
    iget-object v2, p2, Lcom/mbridge/msdk/mbdownload/b$a;->e:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string v1, "mTargetMd5"

    .line 1357
    iget-object v2, p2, Lcom/mbridge/msdk/mbdownload/b$a;->f:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string v1, "uniqueKey"

    .line 1358
    iget-object v2, p2, Lcom/mbridge/msdk/mbdownload/b$a;->g:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string v1, "mReqClz"

    .line 1359
    iget-object v2, p2, Lcom/mbridge/msdk/mbdownload/b$a;->a:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string v1, "succUrls"

    .line 1360
    iget-object v2, p2, Lcom/mbridge/msdk/mbdownload/b$a;->k:[Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Landroid/os/Bundle;->putStringArray(Ljava/lang/String;[Ljava/lang/String;)V

    const-string v1, "faiUrls"

    .line 1361
    iget-object v2, p2, Lcom/mbridge/msdk/mbdownload/b$a;->m:[Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Landroid/os/Bundle;->putStringArray(Ljava/lang/String;[Ljava/lang/String;)V

    const-string v1, "startUrls"

    .line 1362
    iget-object v2, p2, Lcom/mbridge/msdk/mbdownload/b$a;->n:[Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Landroid/os/Bundle;->putStringArray(Ljava/lang/String;[Ljava/lang/String;)V

    const-string v1, "pauseUrls"

    .line 1363
    iget-object v2, p2, Lcom/mbridge/msdk/mbdownload/b$a;->o:[Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Landroid/os/Bundle;->putStringArray(Ljava/lang/String;[Ljava/lang/String;)V

    const-string v1, "cancelUrls"

    .line 1364
    iget-object v2, p2, Lcom/mbridge/msdk/mbdownload/b$a;->p:[Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Landroid/os/Bundle;->putStringArray(Ljava/lang/String;[Ljava/lang/String;)V

    const-string v1, "carryonUrls"

    .line 1365
    iget-object v2, p2, Lcom/mbridge/msdk/mbdownload/b$a;->l:[Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Landroid/os/Bundle;->putStringArray(Ljava/lang/String;[Ljava/lang/String;)V

    const-string v1, "rich_notification"

    .line 1366
    iget-boolean v2, p2, Lcom/mbridge/msdk/mbdownload/b$a;->q:Z

    invoke-virtual {v0, v1, v2}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    const-string v1, "mSilent"

    .line 1367
    iget-boolean v2, p2, Lcom/mbridge/msdk/mbdownload/b$a;->r:Z

    invoke-virtual {v0, v1, v2}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    const-string v1, "mWifiOnly"

    .line 1368
    iget-boolean v2, p2, Lcom/mbridge/msdk/mbdownload/b$a;->s:Z

    invoke-virtual {v0, v1, v2}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    const-string v1, "mOnGoingStatus"

    .line 1369
    iget-boolean v2, p2, Lcom/mbridge/msdk/mbdownload/b$a;->h:Z

    invoke-virtual {v0, v1, v2}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    const-string v1, "mCanPause"

    .line 1370
    iget-boolean v2, p2, Lcom/mbridge/msdk/mbdownload/b$a;->i:Z

    invoke-virtual {v0, v1, v2}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    const-string v1, "mTargetAppIconUrl"

    .line 1371
    iget-object p2, p2, Lcom/mbridge/msdk/mbdownload/b$a;->j:Ljava/lang/String;

    invoke-virtual {v0, v1, p2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 235
    invoke-virtual {p1, v0}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    .line 236
    iget-object p2, p0, Lcom/mbridge/msdk/mbdownload/b$1;->a:Lcom/mbridge/msdk/mbdownload/b;

    iget-object p2, p2, Lcom/mbridge/msdk/mbdownload/b;->a:Landroid/os/Messenger;

    iput-object p2, p1, Landroid/os/Message;->replyTo:Landroid/os/Messenger;

    .line 237
    iget-object p2, p0, Lcom/mbridge/msdk/mbdownload/b$1;->a:Lcom/mbridge/msdk/mbdownload/b;

    invoke-static {p2}, Lcom/mbridge/msdk/mbdownload/b;->w(Lcom/mbridge/msdk/mbdownload/b;)Landroid/os/Messenger;

    move-result-object p2

    invoke-virtual {p2, p1}, Landroid/os/Messenger;->send(Landroid/os/Message;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-void
.end method

.method public final onServiceDisconnected(Landroid/content/ComponentName;)V
    .locals 1

    .line 244
    invoke-static {}, Lcom/mbridge/msdk/mbdownload/b;->a()Ljava/lang/String;

    move-result-object p1

    const-string v0, "ServiceConnection.onServiceDisconnected"

    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 245
    iget-object p1, p0, Lcom/mbridge/msdk/mbdownload/b$1;->a:Lcom/mbridge/msdk/mbdownload/b;

    const/4 v0, 0x0

    invoke-static {p1, v0}, Lcom/mbridge/msdk/mbdownload/b;->a(Lcom/mbridge/msdk/mbdownload/b;Landroid/os/Messenger;)Landroid/os/Messenger;

    return-void
.end method
