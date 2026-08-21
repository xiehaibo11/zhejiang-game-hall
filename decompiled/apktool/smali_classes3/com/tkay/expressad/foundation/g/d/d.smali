.class public final Lcom/tkay/expressad/foundation/g/d/d;
.super Lcom/tkay/expressad/foundation/g/g/a;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/foundation/g/d/d$a;
    }
.end annotation


# static fields
.field private static final a:Ljava/lang/String; = "ImageWorker"


# instance fields
.field private e:Ljava/lang/String;

.field private f:Ljava/lang/String;

.field private g:Ljava/lang/String;

.field private h:Z

.field private i:Lcom/tkay/expressad/foundation/g/d/d$a;


# direct methods
.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 52
    invoke-direct {p0}, Lcom/tkay/expressad/foundation/g/g/a;-><init>()V

    const/4 v0, 0x0

    .line 20
    iput-boolean v0, p0, Lcom/tkay/expressad/foundation/g/d/d;->h:Z

    .line 53
    iput-object p1, p0, Lcom/tkay/expressad/foundation/g/d/d;->e:Ljava/lang/String;

    .line 54
    iput-object p2, p0, Lcom/tkay/expressad/foundation/g/d/d;->f:Ljava/lang/String;

    .line 55
    iput-object p3, p0, Lcom/tkay/expressad/foundation/g/d/d;->g:Ljava/lang/String;

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/foundation/g/d/d;)Ljava/lang/String;
    .locals 0

    .line 14
    iget-object p0, p0, Lcom/tkay/expressad/foundation/g/d/d;->g:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic a(Lcom/tkay/expressad/foundation/g/d/d;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 14
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/foundation/g/d/d;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 117
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/d/d;->i:Lcom/tkay/expressad/foundation/g/d/d$a;

    if-eqz v0, :cond_0

    .line 118
    invoke-interface {v0, p1, p2}, Lcom/tkay/expressad/foundation/g/d/d$a;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method static synthetic b(Lcom/tkay/expressad/foundation/g/d/d;)Ljava/lang/String;
    .locals 0

    .line 14
    iget-object p0, p0, Lcom/tkay/expressad/foundation/g/d/d;->f:Ljava/lang/String;

    return-object p0
.end method

.method private b(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 123
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/d/d;->i:Lcom/tkay/expressad/foundation/g/d/d$a;

    if-eqz v0, :cond_0

    .line 124
    invoke-interface {v0, p1, p2}, Lcom/tkay/expressad/foundation/g/d/d$a;->b(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method private h()Ljava/lang/String;
    .locals 1

    .line 25
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/d/d;->e:Ljava/lang/String;

    return-object v0
.end method

.method private i()Ljava/lang/String;
    .locals 1

    .line 29
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/d/d;->f:Ljava/lang/String;

    return-object v0
.end method

.method private j()Ljava/lang/String;
    .locals 1

    .line 33
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/d/d;->g:Ljava/lang/String;

    return-object v0
.end method

.method private k()Z
    .locals 1

    .line 37
    iget-boolean v0, p0, Lcom/tkay/expressad/foundation/g/d/d;->h:Z

    return v0
.end method

.method private l()Lcom/tkay/expressad/foundation/g/d/d$a;
    .locals 1

    .line 45
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/d/d;->i:Lcom/tkay/expressad/foundation/g/d/d$a;

    return-object v0
.end method

.method private static m()V
    .locals 0

    return-void
.end method

.method private n()V
    .locals 3

    .line 64
    :try_start_0
    new-instance v0, Ljava/io/File;

    iget-object v1, p0, Lcom/tkay/expressad/foundation/g/d/d;->g:Ljava/lang/String;

    invoke-direct {v0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 65
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v1

    if-nez v1, :cond_0

    .line 66
    invoke-virtual {v0}, Ljava/io/File;->mkdirs()Z

    .line 69
    :cond_0
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 70
    invoke-virtual {v0}, Ljava/io/File;->delete()Z

    .line 73
    :cond_1
    iget-object v1, p0, Lcom/tkay/expressad/foundation/g/d/d;->f:Ljava/lang/String;

    new-instance v2, Lcom/tkay/expressad/foundation/g/d/d$1;

    invoke-direct {v2, p0}, Lcom/tkay/expressad/foundation/g/d/d$1;-><init>(Lcom/tkay/expressad/foundation/g/d/d;)V

    invoke-static {v0, v1, v2}, Lcom/tkay/expressad/foundation/g/f/h/a;->a(Ljava/io/File;Ljava/lang/String;Lcom/tkay/expressad/foundation/g/f/e;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/OutOfMemoryError; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 102
    iget-object v1, p0, Lcom/tkay/expressad/foundation/g/d/d;->f:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/OutOfMemoryError;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v1, v0}, Lcom/tkay/expressad/foundation/g/d/d;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :catch_1
    move-exception v0

    .line 97
    iget-object v1, p0, Lcom/tkay/expressad/foundation/g/d/d;->f:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-direct {p0, v1, v2}, Lcom/tkay/expressad/foundation/g/d/d;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 98
    sget-boolean v1, Lcom/tkay/expressad/b;->a:Z

    if-eqz v1, :cond_2

    .line 99
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_2
    return-void
.end method


# virtual methods
.method public final a()V
    .locals 4

    .line 136
    iget-boolean v0, p0, Lcom/tkay/expressad/foundation/g/d/d;->h:Z

    if-nez v0, :cond_3

    .line 137
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/d/d;->g:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 138
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/d/d;->f:Ljava/lang/String;

    const-string v1, "save path is null."

    invoke-direct {p0, v0, v1}, Lcom/tkay/expressad/foundation/g/d/d;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 141
    :cond_0
    new-instance v0, Ljava/io/File;

    iget-object v1, p0, Lcom/tkay/expressad/foundation/g/d/d;->g:Ljava/lang/String;

    invoke-direct {v0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 142
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-virtual {v0}, Ljava/io/File;->length()J

    move-result-wide v0

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-gtz v0, :cond_1

    goto :goto_0

    .line 145
    :cond_1
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/g/d/d;->d()V

    return-void

    .line 143
    :cond_2
    :goto_0
    invoke-direct {p0}, Lcom/tkay/expressad/foundation/g/d/d;->n()V

    return-void

    .line 148
    :cond_3
    invoke-direct {p0}, Lcom/tkay/expressad/foundation/g/d/d;->n()V

    return-void
.end method

.method public final a(Lcom/tkay/expressad/foundation/g/d/d$a;)V
    .locals 0

    .line 49
    iput-object p1, p0, Lcom/tkay/expressad/foundation/g/d/d;->i:Lcom/tkay/expressad/foundation/g/d/d$a;

    return-void
.end method

.method public final a(Z)V
    .locals 0

    .line 41
    iput-boolean p1, p0, Lcom/tkay/expressad/foundation/g/d/d;->h:Z

    return-void
.end method

.method public final b()V
    .locals 0

    return-void
.end method

.method public final c()V
    .locals 0

    return-void
.end method

.method protected final d()V
    .locals 4

    .line 107
    new-instance v0, Ljava/io/File;

    iget-object v1, p0, Lcom/tkay/expressad/foundation/g/d/d;->g:Ljava/lang/String;

    invoke-direct {v0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 108
    invoke-virtual {v0}, Ljava/io/File;->length()J

    move-result-wide v0

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-lez v0, :cond_1

    .line 109
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/d/d;->f:Ljava/lang/String;

    iget-object v1, p0, Lcom/tkay/expressad/foundation/g/d/d;->g:Ljava/lang/String;

    .line 1117
    iget-object v2, p0, Lcom/tkay/expressad/foundation/g/d/d;->i:Lcom/tkay/expressad/foundation/g/d/d$a;

    if-eqz v2, :cond_0

    .line 1118
    invoke-interface {v2, v0, v1}, Lcom/tkay/expressad/foundation/g/d/d$a;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void

    .line 111
    :cond_1
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "load image faild.because file["

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/tkay/expressad/foundation/g/d/d;->g:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "] is not exist!"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 112
    iget-object v1, p0, Lcom/tkay/expressad/foundation/g/d/d;->f:Ljava/lang/String;

    invoke-direct {p0, v1, v0}, Lcom/tkay/expressad/foundation/g/d/d;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
