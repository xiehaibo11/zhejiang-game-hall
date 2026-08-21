.class Lcom/mbridge/msdk/mbdownload/k;
.super Ljava/lang/Thread;
.source "WorkThread.java"


# static fields
.field public static a:I

.field public static b:I

.field public static c:I

.field public static d:I

.field private static final e:Ljava/lang/String;

.field private static t:Ljava/lang/Boolean;


# instance fields
.field private f:Lcom/mbridge/msdk/mbdownload/c;

.field private g:Landroid/content/Context;

.field private h:Z

.field private i:Ljava/io/File;

.field private j:I

.field private k:J

.field private l:J

.field private m:I

.field private n:I

.field private o:Landroid/os/Handler;

.field private p:Lcom/mbridge/msdk/mbdownload/b$a;

.field private q:Landroid/app/NotificationManager;

.field private r:Lcom/mbridge/msdk/out/IDownloadListener;

.field private s:I


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 33
    const-class v0, Lcom/mbridge/msdk/mbdownload/k;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mbridge/msdk/mbdownload/k;->e:Ljava/lang/String;

    const/4 v0, 0x1

    .line 55
    sput v0, Lcom/mbridge/msdk/mbdownload/k;->a:I

    const/4 v0, 0x2

    .line 56
    sput v0, Lcom/mbridge/msdk/mbdownload/k;->b:I

    const/4 v0, 0x3

    .line 57
    sput v0, Lcom/mbridge/msdk/mbdownload/k;->c:I

    const/4 v0, 0x4

    .line 58
    sput v0, Lcom/mbridge/msdk/mbdownload/k;->d:I

    const/4 v0, 0x0

    .line 524
    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    sput-object v0, Lcom/mbridge/msdk/mbdownload/k;->t:Ljava/lang/Boolean;

    return-void
.end method

.method public constructor <init>(Lcom/mbridge/msdk/mbdownload/c;Lcom/mbridge/msdk/mbdownload/b$a;II)V
    .locals 3

    .line 62
    invoke-direct {p0}, Ljava/lang/Thread;-><init>()V

    const/4 v0, 0x0

    .line 46
    iput v0, p0, Lcom/mbridge/msdk/mbdownload/k;->j:I

    const-wide/16 v1, -0x1

    .line 47
    iput-wide v1, p0, Lcom/mbridge/msdk/mbdownload/k;->k:J

    .line 48
    iput-wide v1, p0, Lcom/mbridge/msdk/mbdownload/k;->l:J

    const/4 v1, -0x1

    .line 49
    iput v1, p0, Lcom/mbridge/msdk/mbdownload/k;->m:I

    .line 59
    iput v0, p0, Lcom/mbridge/msdk/mbdownload/k;->s:I

    .line 63
    iput-object p1, p0, Lcom/mbridge/msdk/mbdownload/k;->f:Lcom/mbridge/msdk/mbdownload/c;

    .line 64
    invoke-virtual {p1}, Lcom/mbridge/msdk/mbdownload/c;->c()Landroid/app/Service;

    move-result-object v1

    invoke-virtual {v1}, Landroid/app/Service;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    iput-object v1, p0, Lcom/mbridge/msdk/mbdownload/k;->g:Landroid/content/Context;

    .line 65
    iput-object p2, p0, Lcom/mbridge/msdk/mbdownload/k;->p:Lcom/mbridge/msdk/mbdownload/b$a;

    .line 66
    iput p4, p0, Lcom/mbridge/msdk/mbdownload/k;->j:I

    .line 67
    invoke-virtual {p1}, Lcom/mbridge/msdk/mbdownload/c;->c()Landroid/app/Service;

    move-result-object p1

    const-string p2, "notification"

    invoke-virtual {p1, p2}, Landroid/app/Service;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/app/NotificationManager;

    iput-object p1, p0, Lcom/mbridge/msdk/mbdownload/k;->q:Landroid/app/NotificationManager;

    .line 68
    invoke-static {}, Lcom/mbridge/msdk/mbdownload/j;->a()V

    .line 69
    new-instance p1, Landroid/os/Handler;

    iget-object p2, p0, Lcom/mbridge/msdk/mbdownload/k;->f:Lcom/mbridge/msdk/mbdownload/c;

    invoke-virtual {p2}, Lcom/mbridge/msdk/mbdownload/c;->c()Landroid/app/Service;

    move-result-object p2

    invoke-virtual {p2}, Landroid/app/Service;->getMainLooper()Landroid/os/Looper;

    move-result-object p2

    invoke-direct {p1, p2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    iput-object p1, p0, Lcom/mbridge/msdk/mbdownload/k;->o:Landroid/os/Handler;

    .line 72
    :try_start_0
    sget-object p1, Lcom/mbridge/msdk/mbdownload/c;->d:Landroid/util/SparseArray;

    invoke-virtual {p1, p3}, Landroid/util/SparseArray;->indexOfKey(I)I

    move-result p1

    const/4 p2, 0x1

    if-ltz p1, :cond_0

    .line 73
    sget-object p1, Lcom/mbridge/msdk/mbdownload/c;->d:Landroid/util/SparseArray;

    invoke-virtual {p1, p3}, Landroid/util/SparseArray;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/mbridge/msdk/mbdownload/e$b;

    .line 74
    iget-object p1, p1, Lcom/mbridge/msdk/mbdownload/e$b;->f:[J

    if-eqz p1, :cond_0

    .line 75
    array-length p4, p1

    if-le p4, p2, :cond_0

    .line 76
    aget-wide v1, p1, v0

    iput-wide v1, p0, Lcom/mbridge/msdk/mbdownload/k;->k:J

    .line 77
    aget-wide v1, p1, p2

    iput-wide v1, p0, Lcom/mbridge/msdk/mbdownload/k;->l:J

    .line 81
    :cond_0
    iput p3, p0, Lcom/mbridge/msdk/mbdownload/k;->n:I

    new-array p1, p2, [Z

    const-string p2, "/apk"

    .line 84
    iget-object p3, p0, Lcom/mbridge/msdk/mbdownload/k;->g:Landroid/content/Context;

    invoke-static {p2, p3, p1}, Lcom/mbridge/msdk/mbdownload/e;->a(Ljava/lang/String;Landroid/content/Context;[Z)Ljava/io/File;

    move-result-object p2

    iput-object p2, p0, Lcom/mbridge/msdk/mbdownload/k;->i:Ljava/io/File;

    .line 85
    aget-boolean p1, p1, v0

    iput-boolean p1, p0, Lcom/mbridge/msdk/mbdownload/k;->h:Z

    .line 87
    iget-object p1, p0, Lcom/mbridge/msdk/mbdownload/k;->p:Lcom/mbridge/msdk/mbdownload/b$a;

    .line 1459
    iget-object p2, p1, Lcom/mbridge/msdk/mbdownload/b$a;->f:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string p3, ".apk.tmp"

    if-eqz p2, :cond_1

    .line 1460
    :try_start_1
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object p4, p1, Lcom/mbridge/msdk/mbdownload/b$a;->f:Ljava/lang/String;

    invoke-virtual {p2, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    goto :goto_0

    .line 1462
    :cond_1
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object p4, p1, Lcom/mbridge/msdk/mbdownload/b$a;->d:Ljava/lang/String;

    invoke-static {p4}, Lcom/mbridge/msdk/mbdownload/e;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p4

    invoke-virtual {p2, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    .line 1464
    :goto_0
    iget-object p1, p1, Lcom/mbridge/msdk/mbdownload/b$a;->b:Ljava/lang/String;

    const-string p3, "delta_update"

    invoke-virtual {p1, p3}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_2

    const-string p1, ".apk"

    const-string p3, ".patch"

    .line 1465
    invoke-virtual {p2, p1, p3}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p2

    .line 88
    :cond_2
    new-instance p1, Ljava/io/File;

    iget-object p3, p0, Lcom/mbridge/msdk/mbdownload/k;->i:Ljava/io/File;

    invoke-direct {p1, p3, p2}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    iput-object p1, p0, Lcom/mbridge/msdk/mbdownload/k;->i:Ljava/io/File;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_1

    :catch_0
    move-exception p1

    .line 92
    sget-object p2, Lcom/mbridge/msdk/mbdownload/k;->e:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p3

    invoke-static {p2, p3, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    .line 93
    iget-object p2, p0, Lcom/mbridge/msdk/mbdownload/k;->f:Lcom/mbridge/msdk/mbdownload/c;

    iget p3, p0, Lcom/mbridge/msdk/mbdownload/k;->n:I

    invoke-virtual {p2, p3, p1}, Lcom/mbridge/msdk/mbdownload/c;->a(ILjava/lang/Exception;)V

    :goto_1
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/mbdownload/k;)Lcom/mbridge/msdk/mbdownload/c;
    .locals 0

    .line 32
    iget-object p0, p0, Lcom/mbridge/msdk/mbdownload/k;->f:Lcom/mbridge/msdk/mbdownload/c;

    return-object p0
.end method

.method static synthetic a(Lcom/mbridge/msdk/mbdownload/k;Ljava/io/File;)Ljava/io/File;
    .locals 0

    .line 32
    iput-object p1, p0, Lcom/mbridge/msdk/mbdownload/k;->i:Ljava/io/File;

    return-object p1
.end method

.method static synthetic a(Lcom/mbridge/msdk/mbdownload/k;I)V
    .locals 4
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    const/4 v0, 0x0

    const/4 v1, 0x0

    .line 2428
    :try_start_0
    sget-object v2, Lcom/mbridge/msdk/mbdownload/c;->c:Ljava/util/Map;

    iget-object v3, p0, Lcom/mbridge/msdk/mbdownload/k;->p:Lcom/mbridge/msdk/mbdownload/b$a;

    invoke-interface {v2, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 2429
    sget-object v2, Lcom/mbridge/msdk/mbdownload/c;->c:Ljava/util/Map;

    iget-object v3, p0, Lcom/mbridge/msdk/mbdownload/k;->p:Lcom/mbridge/msdk/mbdownload/b$a;

    invoke-interface {v2, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Landroid/os/Messenger;

    const/4 v3, 0x3

    .line 2430
    invoke-static {v0, v3, p1, v1}, Landroid/os/Message;->obtain(Landroid/os/Handler;III)Landroid/os/Message;

    move-result-object p1

    .line 2429
    invoke-virtual {v2, p1}, Landroid/os/Messenger;->send(Landroid/os/Message;)V
    :try_end_0
    .catch Landroid/os/DeadObjectException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 2433
    :catch_0
    sget-object p1, Lcom/mbridge/msdk/mbdownload/k;->e:Ljava/lang/String;

    const/4 v2, 0x1

    new-array v2, v2, [Ljava/lang/Object;

    iget-object v3, p0, Lcom/mbridge/msdk/mbdownload/k;->p:Lcom/mbridge/msdk/mbdownload/b$a;

    iget-object v3, v3, Lcom/mbridge/msdk/mbdownload/b$a;->c:Ljava/lang/String;

    aput-object v3, v2, v1

    const-string v1, "Service Client for downloading %1$15s is dead. Removing messenger from the service"

    invoke-static {v1, v2}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-static {p1, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 2435
    sget-object p1, Lcom/mbridge/msdk/mbdownload/c;->c:Ljava/util/Map;

    iget-object p0, p0, Lcom/mbridge/msdk/mbdownload/k;->p:Lcom/mbridge/msdk/mbdownload/b$a;

    invoke-interface {p1, p0, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_0
    :goto_0
    return-void
.end method

.method private a(Z)V
    .locals 2

    .line 167
    iget-object p1, p0, Lcom/mbridge/msdk/mbdownload/k;->r:Lcom/mbridge/msdk/out/IDownloadListener;

    if-nez p1, :cond_0

    .line 168
    new-instance p1, Lcom/mbridge/msdk/mbdownload/k$1;

    invoke-direct {p1, p0}, Lcom/mbridge/msdk/mbdownload/k$1;-><init>(Lcom/mbridge/msdk/mbdownload/k;)V

    iput-object p1, p0, Lcom/mbridge/msdk/mbdownload/k;->r:Lcom/mbridge/msdk/out/IDownloadListener;

    .line 218
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;->getInstance()Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/k;->p:Lcom/mbridge/msdk/mbdownload/b$a;

    iget-object v0, v0, Lcom/mbridge/msdk/mbdownload/b$a;->g:Ljava/lang/String;

    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/k;->r:Lcom/mbridge/msdk/out/IDownloadListener;

    invoke-virtual {p1, v0, v1}, Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;->addDownloadListener(Ljava/lang/String;Lcom/mbridge/msdk/out/IDownloadListener;)Z

    .line 219
    invoke-static {}, Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;->getInstance()Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/k;->p:Lcom/mbridge/msdk/mbdownload/b$a;

    iget-object v0, v0, Lcom/mbridge/msdk/mbdownload/b$a;->g:Ljava/lang/String;

    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/k;->p:Lcom/mbridge/msdk/mbdownload/b$a;

    iget-object v1, v1, Lcom/mbridge/msdk/mbdownload/b$a;->d:Ljava/lang/String;

    invoke-virtual {p1, v0, v1}, Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;->start(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic b(Lcom/mbridge/msdk/mbdownload/k;)I
    .locals 0

    .line 32
    iget p0, p0, Lcom/mbridge/msdk/mbdownload/k;->n:I

    return p0
.end method

.method static synthetic c(Lcom/mbridge/msdk/mbdownload/k;)Lcom/mbridge/msdk/mbdownload/b$a;
    .locals 0

    .line 32
    iget-object p0, p0, Lcom/mbridge/msdk/mbdownload/k;->p:Lcom/mbridge/msdk/mbdownload/b$a;

    return-object p0
.end method

.method static synthetic d(Lcom/mbridge/msdk/mbdownload/k;)Landroid/content/Context;
    .locals 0

    .line 32
    iget-object p0, p0, Lcom/mbridge/msdk/mbdownload/k;->g:Landroid/content/Context;

    return-object p0
.end method

.method static synthetic e(Lcom/mbridge/msdk/mbdownload/k;)Ljava/io/File;
    .locals 0

    .line 32
    iget-object p0, p0, Lcom/mbridge/msdk/mbdownload/k;->i:Ljava/io/File;

    return-object p0
.end method


# virtual methods
.method public final a()V
    .locals 2

    .line 136
    sget v0, Lcom/mbridge/msdk/mbdownload/k;->b:I

    iput v0, p0, Lcom/mbridge/msdk/mbdownload/k;->s:I

    .line 137
    invoke-static {}, Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;->getInstance()Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/k;->p:Lcom/mbridge/msdk/mbdownload/b$a;

    iget-object v1, v1, Lcom/mbridge/msdk/mbdownload/b$a;->g:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;->pause(Ljava/lang/String;)V

    return-void
.end method

.method public final a(I)V
    .locals 2

    .line 129
    iput p1, p0, Lcom/mbridge/msdk/mbdownload/k;->m:I

    .line 130
    sget p1, Lcom/mbridge/msdk/mbdownload/k;->c:I

    iput p1, p0, Lcom/mbridge/msdk/mbdownload/k;->s:I

    .line 131
    invoke-static {}, Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;->getInstance()Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/k;->p:Lcom/mbridge/msdk/mbdownload/b$a;

    iget-object v0, v0, Lcom/mbridge/msdk/mbdownload/b$a;->g:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;->pause(Ljava/lang/String;)V

    .line 132
    invoke-static {}, Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;->getInstance()Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/k;->p:Lcom/mbridge/msdk/mbdownload/b$a;

    iget-object v0, v0, Lcom/mbridge/msdk/mbdownload/b$a;->g:Ljava/lang/String;

    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/k;->r:Lcom/mbridge/msdk/out/IDownloadListener;

    invoke-virtual {p1, v0, v1}, Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;->deleteDownloadListener(Ljava/lang/String;Lcom/mbridge/msdk/out/IDownloadListener;)Z

    return-void
.end method

.method public final b()V
    .locals 1

    .line 142
    sget v0, Lcom/mbridge/msdk/mbdownload/k;->a:I

    iput v0, p0, Lcom/mbridge/msdk/mbdownload/k;->s:I

    const/4 v0, 0x0

    .line 143
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/mbdownload/k;->a(Z)V

    return-void
.end method

.method public final c()I
    .locals 1

    .line 147
    iget v0, p0, Lcom/mbridge/msdk/mbdownload/k;->s:I

    return v0
.end method

.method public final d()V
    .locals 4

    const-string v0, "workthread"

    const-string v1, "=====installOrActive"

    .line 151
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 152
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/k;->g:Landroid/content/Context;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v0

    .line 153
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/e;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/e;

    move-result-object v0

    .line 154
    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/k;->p:Lcom/mbridge/msdk/mbdownload/b$a;

    iget-object v1, v1, Lcom/mbridge/msdk/mbdownload/b$a;->g:Ljava/lang/String;

    .line 155
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/db/e;->h(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 156
    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/k;->g:Landroid/content/Context;

    invoke-static {v1, v0}, Lcom/mbridge/msdk/click/c;->d(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 157
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/k;->g:Landroid/content/Context;

    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/k;->i:Ljava/io/File;

    invoke-static {v1}, Landroid/net/Uri;->fromFile(Ljava/io/File;)Landroid/net/Uri;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/mbdownload/k;->p:Lcom/mbridge/msdk/mbdownload/b$a;

    iget-object v2, v2, Lcom/mbridge/msdk/mbdownload/b$a;->d:Ljava/lang/String;

    iget-object v3, p0, Lcom/mbridge/msdk/mbdownload/k;->p:Lcom/mbridge/msdk/mbdownload/b$a;

    iget-object v3, v3, Lcom/mbridge/msdk/mbdownload/b$a;->g:Ljava/lang/String;

    invoke-static {v0, v1, v2, v3}, Lcom/mbridge/msdk/click/c;->a(Landroid/content/Context;Landroid/net/Uri;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 159
    :cond_0
    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/k;->g:Landroid/content/Context;

    invoke-static {v1, v0}, Lcom/mbridge/msdk/click/c;->f(Landroid/content/Context;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public run()V
    .locals 5

    const/4 v0, 0x0

    .line 98
    iput v0, p0, Lcom/mbridge/msdk/mbdownload/k;->j:I

    .line 102
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/k;->f:Lcom/mbridge/msdk/mbdownload/c;

    if-eqz v1, :cond_0

    .line 103
    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/k;->f:Lcom/mbridge/msdk/mbdownload/c;

    iget v2, p0, Lcom/mbridge/msdk/mbdownload/k;->n:I

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/mbdownload/c;->a(I)V

    .line 104
    :cond_0
    iget-wide v1, p0, Lcom/mbridge/msdk/mbdownload/k;->k:J

    const-wide/16 v3, 0x0

    cmp-long v1, v1, v3

    if-lez v1, :cond_1

    const/4 v0, 0x1

    :cond_1
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/mbdownload/k;->a(Z)V

    .line 107
    sget-object v0, Lcom/mbridge/msdk/mbdownload/c;->c:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->size()I

    move-result v0

    if-gtz v0, :cond_2

    .line 108
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/k;->f:Lcom/mbridge/msdk/mbdownload/c;

    invoke-virtual {v0}, Lcom/mbridge/msdk/mbdownload/c;->c()Landroid/app/Service;

    move-result-object v0

    invoke-virtual {v0}, Landroid/app/Service;->stopSelf()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 115
    sget-boolean v1, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v1, :cond_2

    .line 116
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    goto :goto_0

    :catch_0
    move-exception v0

    .line 111
    sget-boolean v1, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v1, :cond_2

    .line 112
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 119
    :cond_2
    :goto_0
    sget v0, Lcom/mbridge/msdk/mbdownload/k;->a:I

    iput v0, p0, Lcom/mbridge/msdk/mbdownload/k;->s:I

    return-void
.end method
