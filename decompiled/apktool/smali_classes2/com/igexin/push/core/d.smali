.class public Lcom/igexin/push/core/d;
.super Ljava/lang/Object;


# static fields
.field public static A:Ljava/lang/String; = null

.field public static B:Ljava/lang/String; = null

.field public static C:Ljava/lang/String; = null

.field public static D:Ljava/lang/String; = null

.field public static E:Ljava/lang/String; = null

.field public static F:J = 0x0L

.field public static G:J = 0x0L

.field public static H:J = 0x0L

.field public static I:J = 0x0L

.field public static J:Ljava/lang/String; = null

.field public static K:Z = false

.field public static L:J = 0x0L

.field public static M:J = 0x0L

.field public static N:Ljava/lang/String; = null

.field public static O:J = 0x0L

.field public static P:I = 0x0

.field public static Q:Ljava/lang/String; = null

.field public static R:Ljava/lang/String; = null

.field public static S:Ljava/lang/String; = null

.field public static T:J = 0x0L

.field public static U:Ljava/lang/String; = null

.field public static V:[B = null

.field public static W:Z = false

.field public static X:Z = false

.field public static Y:Z = false

.field public static Z:Ljava/util/Map; = null
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/igexin/push/core/bean/PushTaskBean;",
            ">;"
        }
    .end annotation
.end field

.field public static a:Ljava/lang/String; = ""

.field public static aa:Ljava/util/Map; = null
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field public static ab:Ljava/util/HashMap; = null
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/Long;",
            ">;"
        }
    .end annotation
.end field

.field public static ac:I = 0x0

.field public static ad:Ljava/lang/String; = null

.field public static ae:J = 0x0L

.field public static af:Ljava/lang/String; = null

.field public static ag:Ljava/lang/String; = null

.field public static ah:Ljava/lang/String; = null

.field public static ai:Ljava/lang/String; = null

.field public static aj:Ljava/lang/String; = null

.field public static ak:Ljava/lang/String; = null

.field public static al:Z = false

.field public static am:I = 0x0

.field public static an:I = 0x0

.field public static ao:[B = null

.field private static ap:Ljava/util/Map; = null
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field public static b:Ljava/lang/String; = ""

.field public static c:Ljava/lang/String; = ""

.field public static d:Ljava/lang/String; = ""

.field public static e:Ljava/lang/String; = ""

.field public static f:Ljava/lang/String; = ""

.field public static g:Landroid/content/Context;

.field public static h:Ljava/util/concurrent/atomic/AtomicBoolean;

.field public static i:Z

.field public static volatile j:Z

.field public static volatile k:Z

.field public static volatile l:Z

.field public static m:Z

.field public static volatile n:Z

.field public static volatile o:Z

.field public static p:Z

.field public static q:I

.field public static r:I

.field public static s:I

.field public static t:J

.field public static u:Ljava/lang/String;

.field public static v:Ljava/lang/String;

.field public static w:Ljava/lang/String;

.field public static x:Ljava/lang/String;

.field public static y:Ljava/lang/String;

.field public static z:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 6

    new-instance v0, Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>(Z)V

    sput-object v0, Lcom/igexin/push/core/d;->h:Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v0, 0x1

    sput-boolean v0, Lcom/igexin/push/core/d;->i:Z

    sput-boolean v1, Lcom/igexin/push/core/d;->j:Z

    sput-boolean v0, Lcom/igexin/push/core/d;->l:Z

    sput-boolean v0, Lcom/igexin/push/core/d;->m:Z

    sput-boolean v0, Lcom/igexin/push/core/d;->p:Z

    sput v1, Lcom/igexin/push/core/d;->q:I

    sput v1, Lcom/igexin/push/core/d;->r:I

    sput v1, Lcom/igexin/push/core/d;->s:I

    const-wide/16 v2, 0x0

    sput-wide v2, Lcom/igexin/push/core/d;->t:J

    sget-object v0, Landroid/os/Build;->MODEL:Ljava/lang/String;

    sput-object v0, Lcom/igexin/push/core/d;->y:Ljava/lang/String;

    const-wide/16 v4, -0x1

    sput-wide v4, Lcom/igexin/push/core/d;->F:J

    sput-wide v4, Lcom/igexin/push/core/d;->G:J

    sput-wide v2, Lcom/igexin/push/core/d;->H:J

    sput-wide v2, Lcom/igexin/push/core/d;->I:J

    sget-object v0, Lcom/igexin/push/config/n;->a:Ljava/lang/String;

    const-string v4, "debug"

    invoke-virtual {v0, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    sput-boolean v0, Lcom/igexin/push/core/d;->K:Z

    sput-wide v2, Lcom/igexin/push/core/d;->L:J

    sput-wide v2, Lcom/igexin/push/core/d;->M:J

    sput-wide v2, Lcom/igexin/push/core/d;->O:J

    sput v1, Lcom/igexin/push/core/d;->P:I

    sput v1, Lcom/igexin/push/core/d;->ac:I

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a(Ljava/lang/String;Z)I
    .locals 3

    const-class v0, Lcom/igexin/push/core/d;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/igexin/push/core/d;->ap:Ljava/util/Map;

    invoke-interface {v1, p0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    if-nez v1, :cond_0

    sget-object v1, Lcom/igexin/push/core/d;->ap:Ljava/util/Map;

    const/4 v2, 0x0

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-interface {v1, p0, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_0
    sget-object v1, Lcom/igexin/push/core/d;->ap:Ljava/util/Map;

    invoke-interface {v1, p0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    if-eqz p1, :cond_1

    add-int/lit8 v1, v1, -0x1

    sget-object p1, Lcom/igexin/push/core/d;->ap:Ljava/util/Map;

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-interface {p1, p0, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    if-nez v1, :cond_1

    sget-object p1, Lcom/igexin/push/core/d;->ap:Ljava/util/Map;

    invoke-interface {p1, p0}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    :cond_1
    monitor-exit v0

    return v1

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0
.end method

.method public static a()Ljava/lang/String;
    .locals 1

    const-string v0, ""

    return-object v0
.end method

.method public static a(J)V
    .locals 0

    sput-wide p0, Lcom/igexin/push/core/d;->t:J

    invoke-static {p0, p1}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/igexin/b/b/a;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    return-void
.end method

.method public static a(Landroid/content/Context;)Z
    .locals 3

    sput-object p0, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/igexin/push/core/d;->e:Ljava/lang/String;

    invoke-static {p0}, Lcom/igexin/push/util/c;->b(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/igexin/push/core/d;->f:Ljava/lang/String;

    invoke-static {}, Lcom/igexin/push/core/d;->d()Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_0

    new-array p0, v1, [Ljava/lang/Object;

    const-string v0, "CoreRuntimeInfo|parseManifests failed"

    invoke-static {v0, p0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    return v1

    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v2, Lcom/igexin/push/core/d;->a:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v2, Lcom/igexin/push/core/d;->c:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v2, Lcom/igexin/push/core/d;->b:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/igexin/b/b/a;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    sput-object v0, Lcom/igexin/push/core/d;->V:[B

    invoke-static {}, Lcom/igexin/push/core/d;->c()V

    invoke-static {}, Lcom/igexin/push/core/d;->b()V

    invoke-static {}, Lcom/igexin/push/util/a;->f()Z

    move-result v0

    sput-boolean v0, Lcom/igexin/push/core/d;->i:Z

    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    sput-object v0, Lcom/igexin/push/core/d;->Z:Ljava/util/Map;

    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    sput-object v0, Lcom/igexin/push/core/d;->aa:Ljava/util/Map;

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/igexin/push/core/d;->ab:Ljava/util/HashMap;

    new-instance v0, Lcom/igexin/sdk/a/d;

    invoke-direct {v0, p0}, Lcom/igexin/sdk/a/d;-><init>(Landroid/content/Context;)V

    invoke-virtual {v0}, Lcom/igexin/sdk/a/d;->c()Z

    move-result p0

    sput-boolean p0, Lcom/igexin/push/core/d;->k:Z

    new-instance p0, Ljava/util/HashMap;

    invoke-direct {p0}, Ljava/util/HashMap;-><init>()V

    sput-object p0, Lcom/igexin/push/core/d;->ap:Ljava/util/Map;

    invoke-static {}, Lcom/igexin/push/core/d;->e()V

    const/4 p0, 0x1

    sput-boolean p0, Lcom/igexin/push/core/d;->al:Z

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "CoreRuntimeInfo|getui sdk init success, isPushOn = "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-boolean v2, Lcom/igexin/push/core/d;->k:Z

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {v0, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    return p0
.end method

.method public static a(Ljava/lang/String;Ljava/lang/Integer;Z)Z
    .locals 2

    const-class v0, Lcom/igexin/push/core/d;

    monitor-enter v0

    :try_start_0
    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    if-eqz p2, :cond_0

    sget-object p2, Lcom/igexin/push/core/d;->ap:Ljava/util/Map;

    invoke-interface {p2, p0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    if-eqz p2, :cond_0

    sget-object p2, Lcom/igexin/push/core/d;->ap:Ljava/util/Map;

    invoke-interface {p2, p0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Ljava/lang/Integer;

    invoke-virtual {p2}, Ljava/lang/Integer;->intValue()I

    move-result p2

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result p1

    add-int v1, p2, p1

    if-nez v1, :cond_0

    sget-object p1, Lcom/igexin/push/core/d;->ap:Ljava/util/Map;

    invoke-interface {p1, p0}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    const/4 p0, 0x0

    monitor-exit v0

    return p0

    :cond_0
    sget-object p1, Lcom/igexin/push/core/d;->ap:Ljava/util/Map;

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    invoke-interface {p1, p0, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const/4 p0, 0x1

    monitor-exit v0

    return p0

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0
.end method

.method private static b()V
    .locals 6

    const-string v0, "/sdcard/libs//"

    const/4 v1, 0x0

    :try_start_0
    new-instance v2, Ljava/io/File;

    const-string v3, "/sdcard/libs/"

    invoke-direct {v2, v3}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2}, Ljava/io/File;->exists()Z

    move-result v3

    if-eqz v3, :cond_0

    invoke-virtual {v2}, Ljava/io/File;->isFile()Z

    move-result v3

    if-eqz v3, :cond_0

    const-string v3, "CoreRuntimeInfo|libs is file not directory, delete libs file ++++"

    new-array v4, v1, [Ljava/lang/Object;

    invoke-static {v3, v4}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-virtual {v2}, Ljava/io/File;->delete()Z

    :cond_0
    invoke-virtual {v2}, Ljava/io/File;->exists()Z

    move-result v3

    if-nez v3, :cond_1

    invoke-virtual {v2}, Ljava/io/File;->mkdir()Z

    move-result v2

    if-nez v2, :cond_1

    const-string v2, "CoreRuntimeInfo|create libs directory failed ++++++"

    new-array v3, v1, [Ljava/lang/Object;

    invoke-static {v2, v3}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_1
    sget-object v2, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-virtual {v2}, Landroid/content/Context;->getFilesDir()Ljava/io/File;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    new-instance v2, Ljava/io/File;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Landroid/os/Environment;->getExternalStorageDirectory()Ljava/io/File;

    move-result-object v4

    invoke-virtual {v4}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "/system/tmp/local"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-direct {v2, v3}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2}, Ljava/io/File;->exists()Z

    move-result v3

    if-eqz v3, :cond_2

    new-instance v3, Lcom/igexin/push/core/e;

    invoke-direct {v3}, Lcom/igexin/push/core/e;-><init>()V

    invoke-virtual {v2, v3}, Ljava/io/File;->listFiles(Ljava/io/FilenameFilter;)[Ljava/io/File;

    move-result-object v2

    if-eqz v2, :cond_2

    array-length v3, v2

    if-lez v3, :cond_2

    array-length v3, v2

    move v4, v1

    :goto_0
    if-ge v4, v3, :cond_2

    aget-object v5, v2, v4

    invoke-virtual {v5}, Ljava/io/File;->delete()Z
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    :catchall_0
    move-exception v2

    :try_start_2
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "CoreRuntimeInfo|"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    new-array v3, v1, [Ljava/lang/Object;

    invoke-static {v2, v3}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_2
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v3, Lcom/igexin/push/core/d;->e:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ".db"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    sput-object v2, Lcom/igexin/push/core/d;->R:Ljava/lang/String;

    const-string v2, "/sdcard/libs//com.igexin.sdk.deviceId.db"

    sput-object v2, Lcom/igexin/push/core/d;->S:Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v3, Lcom/igexin/push/core/d;->e:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ".properties"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    sput-object v2, Lcom/igexin/push/core/d;->Q:Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v0, Lcom/igexin/push/core/d;->e:Ljava/lang/String;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, ".bin"

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/igexin/push/core/d;->U:Ljava/lang/String;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    goto :goto_1

    :catchall_1
    move-exception v0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "CoreRuntimeInfo|initFile exception = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {v0, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :goto_1
    return-void
.end method

.method private static c()V
    .locals 5

    const/4 v0, 0x0

    :try_start_0
    sget-object v1, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v1

    sget-object v2, Lcom/igexin/push/core/d;->e:Ljava/lang/String;

    const/16 v3, 0x1000

    invoke-virtual {v1, v2, v3}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object v1

    if-eqz v1, :cond_0

    iget-object v2, v1, Landroid/content/pm/PackageInfo;->requestedPermissions:[Ljava/lang/String;

    if-eqz v2, :cond_0

    iget-object v1, v1, Landroid/content/pm/PackageInfo;->requestedPermissions:[Ljava/lang/String;

    array-length v2, v1

    move v3, v0

    :goto_0
    if-ge v3, v2, :cond_0

    aget-object v4, v1, v3
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :catch_0
    move-exception v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "CoreRuntimeInfo|init exception : "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    new-array v0, v0, [Ljava/lang/Object;

    invoke-static {v1, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_0
    return-void
.end method

.method private static d()Z
    .locals 6

    sget-object v0, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-static {v0}, Lcom/igexin/push/core/b/a;->a(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    sget-object v1, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-static {v1}, Lcom/igexin/push/core/b/a;->b(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v1

    sget-object v2, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-static {v2}, Lcom/igexin/push/core/b/a;->c(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    const/4 v4, 0x0

    if-nez v3, :cond_0

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_0

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_4

    :cond_0
    :try_start_0
    sget-object v0, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    sget-object v1, Lcom/igexin/push/core/d;->e:Ljava/lang/String;

    const/16 v2, 0x80

    invoke-virtual {v0, v1, v2}, Landroid/content/pm/PackageManager;->getApplicationInfo(Ljava/lang/String;I)Landroid/content/pm/ApplicationInfo;

    move-result-object v0

    if-eqz v0, :cond_7

    iget-object v1, v0, Landroid/content/pm/ApplicationInfo;->metaData:Landroid/os/Bundle;

    if-eqz v1, :cond_7

    iget-object v1, v0, Landroid/content/pm/ApplicationInfo;->metaData:Landroid/os/Bundle;

    const-string v2, "PUSH_APPID"

    invoke-virtual {v1, v2}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    iget-object v2, v0, Landroid/content/pm/ApplicationInfo;->metaData:Landroid/os/Bundle;

    const-string v3, "PUSH_APPSECRET"

    invoke-virtual {v2, v3}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iget-object v0, v0, Landroid/content/pm/ApplicationInfo;->metaData:Landroid/os/Bundle;

    const-string v3, "PUSH_APPKEY"

    invoke-virtual {v0, v3}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    if-eqz v1, :cond_1

    invoke-virtual {v1}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v1

    :cond_1
    if-eqz v2, :cond_2

    invoke-virtual {v2}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v2

    :cond_2
    if-eqz v0, :cond_3

    invoke-virtual {v0}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_3
    move-object v5, v1

    move-object v1, v0

    move-object v0, v5

    :cond_4
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_6

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_6

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_5

    goto :goto_0

    :cond_5
    sput-object v0, Lcom/igexin/push/core/d;->a:Ljava/lang/String;

    sput-object v1, Lcom/igexin/push/core/d;->b:Ljava/lang/String;

    sput-object v2, Lcom/igexin/push/core/d;->c:Ljava/lang/String;

    invoke-static {}, Lcom/igexin/push/config/SDKUrlConfig;->getLocation()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/igexin/push/core/d;->d:Ljava/lang/String;

    const/4 v0, 0x1

    return v0

    :cond_6
    :goto_0
    new-array v0, v4, [Ljava/lang/Object;

    const-string v1, "CoreRuntimeInfo|getui sdk init error, missing parm #####"

    invoke-static {v1, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_7
    return v4

    :catchall_0
    move-exception v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "CoreRuntimeInfo|get ApplicationInfo meta data exception :"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-array v1, v4, [Ljava/lang/Object;

    invoke-static {v0, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    return v4
.end method

.method private static e()V
    .locals 8

    const/4 v0, 0x0

    :try_start_0
    invoke-static {}, Lcom/igexin/push/core/c;->a()Lcom/igexin/push/core/c;

    move-result-object v1

    invoke-virtual {v1}, Lcom/igexin/push/core/c;->k()Lcom/igexin/push/b/b;

    move-result-object v2

    const-string v3, "message"

    const/4 v4, 0x0

    const/4 v5, 0x0

    const/4 v6, 0x0

    const/4 v7, 0x0

    invoke-virtual/range {v2 .. v7}, Lcom/igexin/push/b/b;->a(Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-interface {v0}, Landroid/database/Cursor;->getCount()I

    move-result v1

    sput v1, Lcom/igexin/push/core/d;->an:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    if-eqz v0, :cond_1

    goto :goto_0

    :catchall_0
    if-eqz v0, :cond_1

    :goto_0
    invoke-interface {v0}, Landroid/database/Cursor;->close()V

    :cond_1
    return-void
.end method
