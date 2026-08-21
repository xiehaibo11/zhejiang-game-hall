.class public Lcom/mbridge/msdk/mbdownload/b;
.super Ljava/lang/Object;
.source "DownloadAgent.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mbridge/msdk/mbdownload/b$a;,
        Lcom/mbridge/msdk/mbdownload/b$b;
    }
.end annotation


# static fields
.field private static final b:Ljava/lang/String;


# instance fields
.field final a:Landroid/os/Messenger;

.field private c:Landroid/content/Context;

.field private d:Lcom/mbridge/msdk/out/IDownloadListener;

.field private e:Landroid/os/Messenger;

.field private f:Ljava/lang/String;

.field private g:Ljava/lang/String;

.field private h:Ljava/lang/String;

.field private i:Ljava/lang/String;

.field private j:Ljava/lang/String;

.field private k:Ljava/lang/String;

.field private l:Z

.field private m:Z

.field private n:Ljava/lang/String;

.field private o:Ljava/lang/String;

.field private p:Ljava/lang/String;

.field private q:[Ljava/lang/String;

.field private r:[Ljava/lang/String;

.field private s:[Ljava/lang/String;

.field private t:[Ljava/lang/String;

.field private u:[Ljava/lang/String;

.field private v:[Ljava/lang/String;

.field private w:Z

.field private x:Z

.field private y:Z

.field private z:Landroid/content/ServiceConnection;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 28
    const-class v0, Lcom/mbridge/msdk/mbdownload/b;

    invoke-virtual {v0}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mbridge/msdk/mbdownload/b;->b:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 257
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "none"

    .line 33
    iput-object v0, p0, Lcom/mbridge/msdk/mbdownload/b;->f:Ljava/lang/String;

    const-string v0, ""

    .line 34
    iput-object v0, p0, Lcom/mbridge/msdk/mbdownload/b;->g:Ljava/lang/String;

    const/4 v0, 0x1

    .line 39
    iput-boolean v0, p0, Lcom/mbridge/msdk/mbdownload/b;->l:Z

    const/4 v0, 0x0

    .line 40
    iput-boolean v0, p0, Lcom/mbridge/msdk/mbdownload/b;->m:Z

    .line 55
    iput-boolean v0, p0, Lcom/mbridge/msdk/mbdownload/b;->w:Z

    .line 57
    iput-boolean v0, p0, Lcom/mbridge/msdk/mbdownload/b;->x:Z

    .line 59
    iput-boolean v0, p0, Lcom/mbridge/msdk/mbdownload/b;->y:Z

    .line 114
    new-instance v0, Landroid/os/Messenger;

    new-instance v1, Lcom/mbridge/msdk/mbdownload/b$b;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/mbdownload/b$b;-><init>(Lcom/mbridge/msdk/mbdownload/b;)V

    invoke-direct {v0, v1}, Landroid/os/Messenger;-><init>(Landroid/os/Handler;)V

    iput-object v0, p0, Lcom/mbridge/msdk/mbdownload/b;->a:Landroid/os/Messenger;

    .line 212
    new-instance v0, Lcom/mbridge/msdk/mbdownload/b$1;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/mbdownload/b$1;-><init>(Lcom/mbridge/msdk/mbdownload/b;)V

    iput-object v0, p0, Lcom/mbridge/msdk/mbdownload/b;->z:Landroid/content/ServiceConnection;

    .line 258
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/mbdownload/b;->c:Landroid/content/Context;

    .line 260
    iput-object p2, p0, Lcom/mbridge/msdk/mbdownload/b;->f:Ljava/lang/String;

    .line 261
    iput-object p3, p0, Lcom/mbridge/msdk/mbdownload/b;->h:Ljava/lang/String;

    .line 262
    iput-object p1, p0, Lcom/mbridge/msdk/mbdownload/b;->k:Ljava/lang/String;

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/mbdownload/b;Landroid/os/Messenger;)Landroid/os/Messenger;
    .locals 0

    .line 27
    iput-object p1, p0, Lcom/mbridge/msdk/mbdownload/b;->e:Landroid/os/Messenger;

    return-object p1
.end method

.method static synthetic a(Lcom/mbridge/msdk/mbdownload/b;)Lcom/mbridge/msdk/out/IDownloadListener;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/mbridge/msdk/mbdownload/b;->d:Lcom/mbridge/msdk/out/IDownloadListener;

    return-object p0
.end method

.method static synthetic a()Ljava/lang/String;
    .locals 1

    .line 27
    sget-object v0, Lcom/mbridge/msdk/mbdownload/b;->b:Ljava/lang/String;

    return-object v0
.end method

.method static synthetic b(Lcom/mbridge/msdk/mbdownload/b;)Landroid/content/ServiceConnection;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/mbridge/msdk/mbdownload/b;->z:Landroid/content/ServiceConnection;

    return-object p0
.end method

.method static synthetic c(Lcom/mbridge/msdk/mbdownload/b;)Landroid/content/Context;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/mbridge/msdk/mbdownload/b;->c:Landroid/content/Context;

    return-object p0
.end method

.method static synthetic d(Lcom/mbridge/msdk/mbdownload/b;)Ljava/lang/String;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/mbridge/msdk/mbdownload/b;->f:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic e(Lcom/mbridge/msdk/mbdownload/b;)Ljava/lang/String;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/mbridge/msdk/mbdownload/b;->g:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic f(Lcom/mbridge/msdk/mbdownload/b;)Ljava/lang/String;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/mbridge/msdk/mbdownload/b;->h:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic g(Lcom/mbridge/msdk/mbdownload/b;)Ljava/lang/String;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/mbridge/msdk/mbdownload/b;->k:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic h(Lcom/mbridge/msdk/mbdownload/b;)Z
    .locals 0

    .line 27
    iget-boolean p0, p0, Lcom/mbridge/msdk/mbdownload/b;->l:Z

    return p0
.end method

.method static synthetic i(Lcom/mbridge/msdk/mbdownload/b;)Ljava/lang/String;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/mbridge/msdk/mbdownload/b;->i:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic j(Lcom/mbridge/msdk/mbdownload/b;)Ljava/lang/String;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/mbridge/msdk/mbdownload/b;->j:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic k(Lcom/mbridge/msdk/mbdownload/b;)Ljava/lang/String;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/mbridge/msdk/mbdownload/b;->o:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic l(Lcom/mbridge/msdk/mbdownload/b;)[Ljava/lang/String;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/mbridge/msdk/mbdownload/b;->q:[Ljava/lang/String;

    return-object p0
.end method

.method static synthetic m(Lcom/mbridge/msdk/mbdownload/b;)[Ljava/lang/String;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/mbridge/msdk/mbdownload/b;->u:[Ljava/lang/String;

    return-object p0
.end method

.method static synthetic n(Lcom/mbridge/msdk/mbdownload/b;)[Ljava/lang/String;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/mbridge/msdk/mbdownload/b;->r:[Ljava/lang/String;

    return-object p0
.end method

.method static synthetic o(Lcom/mbridge/msdk/mbdownload/b;)[Ljava/lang/String;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/mbridge/msdk/mbdownload/b;->s:[Ljava/lang/String;

    return-object p0
.end method

.method static synthetic p(Lcom/mbridge/msdk/mbdownload/b;)[Ljava/lang/String;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/mbridge/msdk/mbdownload/b;->t:[Ljava/lang/String;

    return-object p0
.end method

.method static synthetic q(Lcom/mbridge/msdk/mbdownload/b;)[Ljava/lang/String;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/mbridge/msdk/mbdownload/b;->v:[Ljava/lang/String;

    return-object p0
.end method

.method static synthetic r(Lcom/mbridge/msdk/mbdownload/b;)Z
    .locals 0

    .line 27
    iget-boolean p0, p0, Lcom/mbridge/msdk/mbdownload/b;->w:Z

    return p0
.end method

.method static synthetic s(Lcom/mbridge/msdk/mbdownload/b;)Z
    .locals 0

    .line 27
    iget-boolean p0, p0, Lcom/mbridge/msdk/mbdownload/b;->x:Z

    return p0
.end method

.method static synthetic t(Lcom/mbridge/msdk/mbdownload/b;)Z
    .locals 0

    .line 27
    iget-boolean p0, p0, Lcom/mbridge/msdk/mbdownload/b;->y:Z

    return p0
.end method

.method static synthetic u(Lcom/mbridge/msdk/mbdownload/b;)Ljava/lang/String;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/mbridge/msdk/mbdownload/b;->n:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic v(Lcom/mbridge/msdk/mbdownload/b;)Z
    .locals 0

    .line 27
    iget-boolean p0, p0, Lcom/mbridge/msdk/mbdownload/b;->m:Z

    return p0
.end method

.method static synthetic w(Lcom/mbridge/msdk/mbdownload/b;)Landroid/os/Messenger;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/mbridge/msdk/mbdownload/b;->e:Landroid/os/Messenger;

    return-object p0
.end method


# virtual methods
.method public getTargetAppIconUrl()Ljava/lang/String;
    .locals 1

    .line 133
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/b;->n:Ljava/lang/String;

    return-object v0
.end method

.method public isCanPause()Z
    .locals 1

    .line 125
    iget-boolean v0, p0, Lcom/mbridge/msdk/mbdownload/b;->m:Z

    return v0
.end method

.method public isOnGoingStatus()Z
    .locals 1

    .line 117
    iget-boolean v0, p0, Lcom/mbridge/msdk/mbdownload/b;->l:Z

    return v0
.end method

.method public setCanPause(Z)V
    .locals 0

    .line 129
    iput-boolean p1, p0, Lcom/mbridge/msdk/mbdownload/b;->m:Z

    return-void
.end method

.method public varargs setCancelUrls([Ljava/lang/String;)V
    .locals 0

    .line 90
    iput-object p1, p0, Lcom/mbridge/msdk/mbdownload/b;->t:[Ljava/lang/String;

    return-void
.end method

.method public varargs setCarryOnUrls([Ljava/lang/String;)V
    .locals 0

    .line 94
    iput-object p1, p0, Lcom/mbridge/msdk/mbdownload/b;->v:[Ljava/lang/String;

    return-void
.end method

.method public setDownloadClz(Ljava/lang/String;)V
    .locals 0

    .line 285
    iput-object p1, p0, Lcom/mbridge/msdk/mbdownload/b;->p:Ljava/lang/String;

    return-void
.end method

.method public setDownloadListener(Lcom/mbridge/msdk/out/IDownloadListener;)V
    .locals 0

    .line 281
    iput-object p1, p0, Lcom/mbridge/msdk/mbdownload/b;->d:Lcom/mbridge/msdk/out/IDownloadListener;

    return-void
.end method

.method public varargs setFaiUrls([Ljava/lang/String;)V
    .locals 0

    .line 78
    iput-object p1, p0, Lcom/mbridge/msdk/mbdownload/b;->u:[Ljava/lang/String;

    return-void
.end method

.method public setMd5(Ljava/lang/String;)V
    .locals 0

    .line 62
    iput-object p1, p0, Lcom/mbridge/msdk/mbdownload/b;->i:Ljava/lang/String;

    return-void
.end method

.method public setOnGoingStatus(Z)V
    .locals 0

    .line 121
    iput-boolean p1, p0, Lcom/mbridge/msdk/mbdownload/b;->l:Z

    return-void
.end method

.method public varargs setPauseUrls([Ljava/lang/String;)V
    .locals 0

    .line 86
    iput-object p1, p0, Lcom/mbridge/msdk/mbdownload/b;->s:[Ljava/lang/String;

    return-void
.end method

.method public setReportClz(Ljava/lang/String;)V
    .locals 0

    .line 70
    iput-object p1, p0, Lcom/mbridge/msdk/mbdownload/b;->o:Ljava/lang/String;

    return-void
.end method

.method public setRichNotification(Z)V
    .locals 0

    .line 103
    iput-boolean p1, p0, Lcom/mbridge/msdk/mbdownload/b;->w:Z

    return-void
.end method

.method public setSilentDownload(Z)V
    .locals 0

    .line 107
    iput-boolean p1, p0, Lcom/mbridge/msdk/mbdownload/b;->x:Z

    return-void
.end method

.method public varargs setStartUrls([Ljava/lang/String;)V
    .locals 0

    .line 82
    iput-object p1, p0, Lcom/mbridge/msdk/mbdownload/b;->r:[Ljava/lang/String;

    return-void
.end method

.method public varargs setSuccUrls([Ljava/lang/String;)V
    .locals 0

    .line 74
    iput-object p1, p0, Lcom/mbridge/msdk/mbdownload/b;->q:[Ljava/lang/String;

    return-void
.end method

.method public setTargetAppIconUrl(Ljava/lang/String;)V
    .locals 0

    .line 137
    iput-object p1, p0, Lcom/mbridge/msdk/mbdownload/b;->n:Ljava/lang/String;

    return-void
.end method

.method public setTargetMd5(Ljava/lang/String;)V
    .locals 0

    .line 66
    iput-object p1, p0, Lcom/mbridge/msdk/mbdownload/b;->j:Ljava/lang/String;

    return-void
.end method

.method public setTitle(Ljava/lang/String;)Lcom/mbridge/msdk/mbdownload/b;
    .locals 0

    .line 271
    iput-object p1, p0, Lcom/mbridge/msdk/mbdownload/b;->g:Ljava/lang/String;

    return-object p0
.end method

.method public setWifiOnly(Z)V
    .locals 0

    .line 111
    iput-boolean p1, p0, Lcom/mbridge/msdk/mbdownload/b;->y:Z

    return-void
.end method

.method public start()V
    .locals 5

    .line 289
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/b;->p:Ljava/lang/String;

    if-eqz v0, :cond_0

    .line 294
    :try_start_0
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    .line 295
    new-instance v1, Landroid/content/Intent;

    iget-object v2, p0, Lcom/mbridge/msdk/mbdownload/b;->c:Landroid/content/Context;

    invoke-direct {v1, v2, v0}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    .line 296
    iget-object v2, p0, Lcom/mbridge/msdk/mbdownload/b;->c:Landroid/content/Context;

    iget-object v3, p0, Lcom/mbridge/msdk/mbdownload/b;->z:Landroid/content/ServiceConnection;

    const/4 v4, 0x1

    invoke-virtual {v2, v1, v3, v4}, Landroid/content/Context;->bindService(Landroid/content/Intent;Landroid/content/ServiceConnection;I)Z

    .line 305
    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/b;->c:Landroid/content/Context;

    new-instance v2, Landroid/content/Intent;

    iget-object v3, p0, Lcom/mbridge/msdk/mbdownload/b;->c:Landroid/content/Context;

    invoke-direct {v2, v3, v0}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    invoke-virtual {v1, v2}, Landroid/content/Context;->startService(Landroid/content/Intent;)Landroid/content/ComponentName;
    :try_end_0
    .catch Ljava/lang/ClassNotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 308
    new-instance v1, Ljava/lang/IllegalArgumentException;

    invoke-direct {v1, v0}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/Throwable;)V

    throw v1

    .line 290
    :cond_0
    new-instance v0, Ljava/lang/IllegalArgumentException;

    const-string v1, "cannot find MBService"

    invoke-direct {v0, v1}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw v0
.end method
