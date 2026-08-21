.class public Lcom/kwad/sdk/ranger/b;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/sdk/ranger/b$a;
    }
.end annotation


# static fields
.field public static final TAG:Ljava/lang/String;


# instance fields
.field private value:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "Ranger_"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    const-class v1, Lcom/kwad/sdk/ranger/b;

    invoke-virtual {v1}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/kwad/sdk/ranger/b;->TAG:Ljava/lang/String;

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(B)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/ranger/b;-><init>()V

    return-void
.end method

.method public static Hn()Lcom/kwad/sdk/ranger/b;
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/ranger/b$a;->Ho()Lcom/kwad/sdk/ranger/b;

    move-result-object v0

    return-object v0
.end method

.method static synthetic a(Lcom/kwad/sdk/ranger/b;Ljava/lang/String;Ljava/lang/String;)Lcom/kwad/sdk/ranger/b/a/c;
    .locals 0

    invoke-static {p1, p2}, Lcom/kwad/sdk/ranger/b;->ak(Ljava/lang/String;Ljava/lang/String;)Lcom/kwad/sdk/ranger/b/a/c;

    move-result-object p0

    return-object p0
.end method

.method private static a(Lcom/kwad/sdk/ranger/a/a;ZLjava/lang/Class;)Ljava/lang/Object;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/kwad/sdk/ranger/a/a;",
            "Z",
            "Ljava/lang/Class<",
            "*>;)",
            "Ljava/lang/Object;"
        }
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/ranger/a/a;->aHf:Lcom/kwad/sdk/ranger/a/a$b;

    invoke-virtual {v0}, Lcom/kwad/sdk/ranger/a/a$b;->Hx()[Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_2

    array-length v1, v0

    if-nez v1, :cond_0

    goto :goto_0

    :cond_0
    if-eqz p1, :cond_1

    iget-object p0, p0, Lcom/kwad/sdk/ranger/a/a;->aHf:Lcom/kwad/sdk/ranger/a/a$b;

    iget-object p0, p0, Lcom/kwad/sdk/ranger/a/a$b;->name:Ljava/lang/String;

    invoke-static {p2, p0, v0}, Lcom/kwad/sdk/utils/s;->b(Ljava/lang/Class;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    goto :goto_1

    :cond_1
    iget-object p1, p0, Lcom/kwad/sdk/ranger/a/a;->aHa:Ljava/lang/Object;

    iget-object p0, p0, Lcom/kwad/sdk/ranger/a/a;->aHf:Lcom/kwad/sdk/ranger/a/a$b;

    iget-object p0, p0, Lcom/kwad/sdk/ranger/a/a$b;->name:Ljava/lang/String;

    invoke-static {p1, p0, v0}, Lcom/kwad/sdk/utils/s;->f(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    goto :goto_1

    :cond_2
    :goto_0
    const/4 v0, 0x0

    if-eqz p1, :cond_3

    iget-object p0, p0, Lcom/kwad/sdk/ranger/a/a;->aHf:Lcom/kwad/sdk/ranger/a/a$b;

    iget-object p0, p0, Lcom/kwad/sdk/ranger/a/a$b;->name:Ljava/lang/String;

    new-array p1, v0, [Ljava/lang/Object;

    invoke-static {p2, p0, p1}, Lcom/kwad/sdk/utils/s;->b(Ljava/lang/Class;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    goto :goto_1

    :cond_3
    iget-object p1, p0, Lcom/kwad/sdk/ranger/a/a;->aHa:Ljava/lang/Object;

    iget-object p0, p0, Lcom/kwad/sdk/ranger/a/a;->aHf:Lcom/kwad/sdk/ranger/a/a$b;

    iget-object p0, p0, Lcom/kwad/sdk/ranger/a/a$b;->name:Ljava/lang/String;

    new-array p2, v0, [Ljava/lang/Object;

    invoke-static {p1, p0, p2}, Lcom/kwad/sdk/utils/s;->f(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    :goto_1
    return-object p0
.end method

.method static synthetic a(Lcom/kwad/sdk/ranger/b;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/ranger/b;->value:Ljava/lang/String;

    return-object p0
.end method

.method private a(Lcom/kwad/sdk/ranger/a/a;)V
    .locals 3

    iget-object v0, p1, Lcom/kwad/sdk/ranger/a/a;->aHg:Lcom/kwad/sdk/ranger/a/a;

    if-eqz v0, :cond_2

    iget-object v0, p1, Lcom/kwad/sdk/ranger/a/a;->aHg:Lcom/kwad/sdk/ranger/a/a;

    invoke-virtual {v0}, Lcom/kwad/sdk/ranger/a/a;->Hu()Z

    move-result v0

    if-nez v0, :cond_2

    iget-object v0, p1, Lcom/kwad/sdk/ranger/a/a;->aHc:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p1, Lcom/kwad/sdk/ranger/a/a;->aHg:Lcom/kwad/sdk/ranger/a/a;

    invoke-static {p1}, Lcom/kwad/sdk/ranger/b;->c(Lcom/kwad/sdk/ranger/a/a;)Ljava/lang/Object;

    move-result-object v1

    :goto_0
    iput-object v1, v0, Lcom/kwad/sdk/ranger/a/a;->aHa:Ljava/lang/Object;

    goto :goto_1

    :cond_0
    iget-object v0, p1, Lcom/kwad/sdk/ranger/a/a;->aHf:Lcom/kwad/sdk/ranger/a/a$b;

    if-eqz v0, :cond_1

    iget-object v0, p1, Lcom/kwad/sdk/ranger/a/a;->aHf:Lcom/kwad/sdk/ranger/a/a$b;

    invoke-virtual {v0}, Lcom/kwad/sdk/ranger/a/a$b;->Hu()Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p1, Lcom/kwad/sdk/ranger/a/a;->aHg:Lcom/kwad/sdk/ranger/a/a;

    invoke-direct {p0, p1}, Lcom/kwad/sdk/ranger/b;->b(Lcom/kwad/sdk/ranger/a/a;)Ljava/lang/Object;

    move-result-object v1

    goto :goto_0

    :cond_1
    :goto_1
    iget-object p1, p1, Lcom/kwad/sdk/ranger/a/a;->aHg:Lcom/kwad/sdk/ranger/a/a;

    invoke-direct {p0, p1}, Lcom/kwad/sdk/ranger/b;->a(Lcom/kwad/sdk/ranger/a/a;)V

    return-void

    :cond_2
    iget-object v0, p1, Lcom/kwad/sdk/ranger/a/a;->aHc:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_3

    invoke-static {p1}, Lcom/kwad/sdk/ranger/b;->c(Lcom/kwad/sdk/ranger/a/a;)Ljava/lang/Object;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/kwad/sdk/ranger/b;->l(Ljava/lang/Object;)V

    return-void

    :cond_3
    iget-object v0, p1, Lcom/kwad/sdk/ranger/a/a;->aHf:Lcom/kwad/sdk/ranger/a/a$b;

    if-eqz v0, :cond_4

    iget-object v0, p1, Lcom/kwad/sdk/ranger/a/a;->aHf:Lcom/kwad/sdk/ranger/a/a$b;

    invoke-virtual {v0}, Lcom/kwad/sdk/ranger/a/a$b;->Hu()Z

    move-result v0

    if-nez v0, :cond_4

    invoke-direct {p0, p1}, Lcom/kwad/sdk/ranger/b;->b(Lcom/kwad/sdk/ranger/a/a;)Ljava/lang/Object;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/kwad/sdk/ranger/b;->l(Ljava/lang/Object;)V

    return-void

    :cond_4
    sget-object v0, Lcom/kwad/sdk/ranger/b;->TAG:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "node.nodeClassName:"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v2, p1, Lcom/kwad/sdk/ranger/a/a;->aHb:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object p1, p1, Lcom/kwad/sdk/ranger/a/a;->aHb:Ljava/lang/String;

    invoke-static {p1}, Lcom/kwad/sdk/utils/s;->fu(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_5

    const-string p1, "true"

    goto :goto_2

    :cond_5
    const-string p1, "false"

    :goto_2
    iput-object p1, p0, Lcom/kwad/sdk/ranger/b;->value:Ljava/lang/String;

    return-void
.end method

.method static synthetic a(Lcom/kwad/sdk/ranger/b;Lcom/kwad/sdk/ranger/a/a;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/sdk/ranger/b;->a(Lcom/kwad/sdk/ranger/a/a;)V

    return-void
.end method

.method private static ak(Ljava/lang/String;Ljava/lang/String;)Lcom/kwad/sdk/ranger/b/a/c;
    .locals 1

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    new-instance v0, Lcom/kwad/sdk/ranger/b/a/c;

    invoke-direct {v0}, Lcom/kwad/sdk/ranger/b/a/c;-><init>()V

    iput-object p0, v0, Lcom/kwad/sdk/ranger/b/a/c;->name:Ljava/lang/String;

    iput-object p1, v0, Lcom/kwad/sdk/ranger/b/a/c;->aHs:Ljava/lang/String;

    return-object v0

    :cond_1
    :goto_0
    const/4 p0, 0x0

    return-object p0
.end method

.method private b(Lcom/kwad/sdk/ranger/a/a;)Ljava/lang/Object;
    .locals 3

    iget-object v0, p1, Lcom/kwad/sdk/ranger/a/a;->aHf:Lcom/kwad/sdk/ranger/a/a$b;

    iget-boolean v0, v0, Lcom/kwad/sdk/ranger/a/a$b;->aHo:Z

    const/4 v1, 0x0

    if-eqz v0, :cond_2

    :try_start_0
    iget-object v0, p1, Lcom/kwad/sdk/ranger/a/a;->aHb:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p1, Lcom/kwad/sdk/ranger/a/a;->aHb:Ljava/lang/String;

    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    goto :goto_0

    :cond_0
    iget-object v0, p1, Lcom/kwad/sdk/ranger/a/a;->aHa:Ljava/lang/Object;

    if-eqz v0, :cond_1

    iget-object v0, p1, Lcom/kwad/sdk/ranger/a/a;->aHa:Ljava/lang/Object;

    invoke-virtual {v0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    goto :goto_0

    :cond_1
    move-object v0, v1

    :goto_0
    if-eqz v0, :cond_3

    const/4 v2, 0x1

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/ranger/b;->a(Lcom/kwad/sdk/ranger/a/a;ZLjava/lang/Class;)Ljava/lang/Object;

    move-result-object v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception p1

    sget-object v0, Lcom/kwad/sdk/ranger/b;->TAG:Ljava/lang/String;

    invoke-static {p1}, Landroid/util/Log;->getStackTraceString(Ljava/lang/Throwable;)Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/kwad/sdk/core/e/c;->w(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    :cond_2
    iget-object v0, p1, Lcom/kwad/sdk/ranger/a/a;->aHa:Ljava/lang/Object;

    if-eqz v0, :cond_3

    const/4 v0, 0x0

    invoke-static {p1, v0, v1}, Lcom/kwad/sdk/ranger/b;->a(Lcom/kwad/sdk/ranger/a/a;ZLjava/lang/Class;)Ljava/lang/Object;

    move-result-object v1

    :cond_3
    :goto_1
    return-object v1
.end method

.method private static c(Lcom/kwad/sdk/ranger/a/a;)Ljava/lang/Object;
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/sdk/ranger/a/a;->aHd:Z

    if-eqz v0, :cond_0

    :try_start_0
    iget-object v0, p0, Lcom/kwad/sdk/ranger/a/a;->aHb:Ljava/lang/String;

    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    iget-object p0, p0, Lcom/kwad/sdk/ranger/a/a;->aHc:Ljava/lang/String;

    invoke-static {v0, p0}, Lcom/kwad/sdk/utils/s;->c(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception p0

    sget-object v0, Lcom/kwad/sdk/ranger/b;->TAG:Ljava/lang/String;

    invoke-static {p0}, Landroid/util/Log;->getStackTraceString(Ljava/lang/Throwable;)Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Lcom/kwad/sdk/core/e/c;->w(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/ranger/a/a;->aHa:Ljava/lang/Object;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/sdk/ranger/a/a;->aHa:Ljava/lang/Object;

    iget-object p0, p0, Lcom/kwad/sdk/ranger/a/a;->aHc:Ljava/lang/String;

    invoke-static {v0, p0}, Lcom/kwad/sdk/utils/s;->f(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    goto :goto_1

    :cond_1
    :goto_0
    const/4 p0, 0x0

    :goto_1
    return-object p0
.end method

.method private l(Ljava/lang/Object;)V
    .locals 1

    if-eqz p1, :cond_0

    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    :goto_0
    iput-object p1, p0, Lcom/kwad/sdk/ranger/b;->value:Ljava/lang/String;

    return-void

    :cond_0
    sget-object p1, Lcom/kwad/sdk/ranger/b;->TAG:Ljava/lang/String;

    const-string v0, "value is null by ob null"

    invoke-static {p1, v0}, Lcom/kwad/sdk/core/e/c;->w(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, ""

    goto :goto_0
.end method


# virtual methods
.method public final b(Lcom/kwad/sdk/ranger/d;)V
    .locals 3

    if-eqz p1, :cond_1

    iget-object v0, p1, Lcom/kwad/sdk/ranger/d;->aGK:Ljava/util/List;

    if-eqz v0, :cond_1

    iget-object v0, p1, Lcom/kwad/sdk/ranger/d;->aGK:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    iget-object p1, p1, Lcom/kwad/sdk/ranger/d;->aGK:Ljava/util/List;

    new-instance v0, Lcom/kwad/sdk/ranger/b$1;

    invoke-direct {v0, p0, p1}, Lcom/kwad/sdk/ranger/b$1;-><init>(Lcom/kwad/sdk/ranger/b;Ljava/util/List;)V

    const-wide/16 v1, 0x78

    sget-object p1, Ljava/util/concurrent/TimeUnit;->SECONDS:Ljava/util/concurrent/TimeUnit;

    invoke-static {v0, v1, v2, p1}, Lcom/kwad/sdk/utils/g;->schedule(Ljava/lang/Runnable;JLjava/util/concurrent/TimeUnit;)V

    :cond_1
    :goto_0
    return-void
.end method
