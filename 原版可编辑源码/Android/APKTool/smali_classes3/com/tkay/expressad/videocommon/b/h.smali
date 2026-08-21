.class public final Lcom/tkay/expressad/videocommon/b/h;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/videocommon/b/h$a;
    }
.end annotation


# static fields
.field public static final a:I = 0xf731400

.field private static final b:Ljava/lang/String; = "HTMLResourceManager"


# instance fields
.field private c:Ljava/lang/String;


# direct methods
.method private constructor <init>()V
    .locals 1

    .line 25
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 1034
    sget-object v0, Lcom/tkay/expressad/foundation/g/c/c;->i:Lcom/tkay/expressad/foundation/g/c/c;

    invoke-static {v0}, Lcom/tkay/expressad/foundation/g/c/f;->b(Lcom/tkay/expressad/foundation/g/c/c;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/videocommon/b/h;->c:Ljava/lang/String;

    return-void
.end method

.method synthetic constructor <init>(B)V
    .locals 0

    .line 15
    invoke-direct {p0}, Lcom/tkay/expressad/videocommon/b/h;-><init>()V

    return-void
.end method

.method public static a()Lcom/tkay/expressad/videocommon/b/h;
    .locals 1

    .line 30
    sget-object v0, Lcom/tkay/expressad/videocommon/b/h$a;->a:Lcom/tkay/expressad/videocommon/b/h;

    return-object v0
.end method

.method static synthetic a(Lcom/tkay/expressad/videocommon/b/h;)Ljava/lang/String;
    .locals 0

    .line 15
    iget-object p0, p0, Lcom/tkay/expressad/videocommon/b/h;->c:Ljava/lang/String;

    return-object p0
.end method

.method private c()V
    .locals 1

    .line 34
    sget-object v0, Lcom/tkay/expressad/foundation/g/c/c;->i:Lcom/tkay/expressad/foundation/g/c/c;

    invoke-static {v0}, Lcom/tkay/expressad/foundation/g/c/f;->b(Lcom/tkay/expressad/foundation/g/c/c;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/videocommon/b/h;->c:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    .line 83
    :try_start_0
    invoke-static {p1}, Lcom/tkay/expressad/foundation/h/x;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/tkay/expressad/foundation/h/p;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 84
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/tkay/expressad/videocommon/b/h;->c:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "/"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, ".html"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 85
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 86
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, "file:////"

    .line 87
    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p1

    :catchall_0
    move-exception p1

    .line 90
    sget-boolean v0, Lcom/tkay/expressad/b;->a:Z

    if-eqz v0, :cond_0

    .line 91
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public final a(Ljava/lang/String;[B)Z
    .locals 2

    if-eqz p2, :cond_0

    .line 66
    :try_start_0
    array-length v0, p2

    if-lez v0, :cond_0

    .line 67
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/tkay/expressad/videocommon/b/h;->c:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "/"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {p1}, Lcom/tkay/expressad/foundation/h/x;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/tkay/expressad/foundation/h/p;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, ".html"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 68
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 69
    invoke-static {p2, v0}, Lcom/tkay/expressad/foundation/h/m;->a([BLjava/io/File;)Z

    move-result p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-eqz p1, :cond_0

    const/4 p1, 0x1

    return p1

    :catch_0
    move-exception p1

    .line 74
    sget-boolean p2, Lcom/tkay/expressad/b;->a:Z

    if-eqz p2, :cond_0

    .line 75
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method public final b(Ljava/lang/String;)Ljava/lang/String;
    .locals 5

    .line 99
    :try_start_0
    invoke-static {p1}, Lcom/tkay/expressad/foundation/h/x;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/tkay/expressad/foundation/h/p;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 100
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/tkay/expressad/videocommon/b/h;->c:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "/"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, ".html"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 101
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 102
    invoke-virtual {v0}, Ljava/io/File;->length()J

    move-result-wide v1

    const-wide/16 v3, 0x0

    cmp-long p1, v1, v3

    if-lez p1, :cond_0

    .line 103
    invoke-static {v0}, Lcom/tkay/expressad/foundation/h/m;->a(Ljava/io/File;)Ljava/lang/String;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p1

    :catchall_0
    move-exception p1

    .line 106
    sget-boolean v0, Lcom/tkay/expressad/b;->a:Z

    if-eqz v0, :cond_0

    .line 107
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public final b()V
    .locals 2

    .line 39
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/h;->c:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 2017
    sget-object v0, Lcom/tkay/expressad/videocommon/b/f$a;->a:Lcom/tkay/expressad/videocommon/b/f;

    .line 40
    new-instance v1, Lcom/tkay/expressad/videocommon/b/h$1;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/videocommon/b/h$1;-><init>(Lcom/tkay/expressad/videocommon/b/h;)V

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/videocommon/b/f;->a(Lcom/tkay/expressad/foundation/g/g/a;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_0
    return-void

    :catch_0
    move-exception v0

    .line 58
    sget-boolean v1, Lcom/tkay/expressad/b;->a:Z

    if-eqz v1, :cond_1

    .line 59
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    return-void
.end method
