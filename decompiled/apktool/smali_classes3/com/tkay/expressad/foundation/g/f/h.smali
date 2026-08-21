.class public Lcom/tkay/expressad/foundation/g/f/h;
.super Ljava/lang/Object;


# static fields
.field private static final a:Ljava/lang/String;


# instance fields
.field private b:Lcom/tkay/expressad/foundation/g/f/e/a;

.field private c:Lcom/tkay/expressad/foundation/g/f/g;

.field private d:Lcom/tkay/expressad/foundation/g/f/c;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 17
    const-class v0, Lcom/tkay/expressad/foundation/g/f/h;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/expressad/foundation/g/f/h;->a:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Ljavax/net/ssl/SSLSocketFactory;Lcom/tkay/expressad/foundation/g/f/c;)V
    .locals 2

    .line 24
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 25
    new-instance v0, Lcom/tkay/expressad/foundation/g/f/e/b;

    const/4 v1, 0x0

    invoke-direct {v0, p1, v1}, Lcom/tkay/expressad/foundation/g/f/e/b;-><init>(Ljavax/net/ssl/SSLSocketFactory;Lcom/tkay/expressad/foundation/g/f/c/a;)V

    iput-object v0, p0, Lcom/tkay/expressad/foundation/g/f/h;->b:Lcom/tkay/expressad/foundation/g/f/e/a;

    .line 26
    new-instance p1, Lcom/tkay/expressad/foundation/g/f/f/a;

    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/f/h;->b:Lcom/tkay/expressad/foundation/g/f/e/a;

    invoke-direct {p1, v0, p2}, Lcom/tkay/expressad/foundation/g/f/f/a;-><init>(Lcom/tkay/expressad/foundation/g/f/e/a;Lcom/tkay/expressad/foundation/g/f/c;)V

    iput-object p1, p0, Lcom/tkay/expressad/foundation/g/f/h;->c:Lcom/tkay/expressad/foundation/g/f/g;

    .line 27
    iput-object p2, p0, Lcom/tkay/expressad/foundation/g/f/h;->d:Lcom/tkay/expressad/foundation/g/f/c;

    return-void
.end method

.method private b(Lcom/tkay/expressad/foundation/g/f/i;)V
    .locals 4

    .line 38
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/f/h;->d:Lcom/tkay/expressad/foundation/g/f/c;

    invoke-interface {v0, p1}, Lcom/tkay/expressad/foundation/g/f/c;->c(Lcom/tkay/expressad/foundation/g/f/i;)V

    .line 40
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/g/f/i;->f()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 41
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/g/f/i;->c()V

    .line 42
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/f/h;->d:Lcom/tkay/expressad/foundation/g/f/c;

    invoke-interface {v0, p1}, Lcom/tkay/expressad/foundation/g/f/c;->b(Lcom/tkay/expressad/foundation/g/f/i;)V

    .line 43
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/f/h;->d:Lcom/tkay/expressad/foundation/g/f/c;

    invoke-interface {v0, p1}, Lcom/tkay/expressad/foundation/g/f/c;->a(Lcom/tkay/expressad/foundation/g/f/i;)V

    return-void

    .line 47
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/f/h;->d:Lcom/tkay/expressad/foundation/g/f/c;

    invoke-interface {v0, p1}, Lcom/tkay/expressad/foundation/g/f/c;->d(Lcom/tkay/expressad/foundation/g/f/i;)V

    .line 48
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/f/h;->c:Lcom/tkay/expressad/foundation/g/f/g;

    invoke-interface {v0, p1}, Lcom/tkay/expressad/foundation/g/f/g;->a(Lcom/tkay/expressad/foundation/g/f/i;)Lcom/tkay/expressad/foundation/g/f/f/c;

    move-result-object v0

    .line 49
    invoke-virtual {p1, v0}, Lcom/tkay/expressad/foundation/g/f/i;->a(Lcom/tkay/expressad/foundation/g/f/f/c;)Lcom/tkay/expressad/foundation/g/f/k;

    move-result-object v0

    .line 50
    iget-object v1, p0, Lcom/tkay/expressad/foundation/g/f/h;->d:Lcom/tkay/expressad/foundation/g/f/c;

    invoke-interface {v1, p1, v0}, Lcom/tkay/expressad/foundation/g/f/c;->a(Lcom/tkay/expressad/foundation/g/f/i;Lcom/tkay/expressad/foundation/g/f/k;)V
    :try_end_0
    .catch Lcom/tkay/expressad/foundation/g/f/a/a; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 55
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "Unhandled exception "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 56
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/f/h;->d:Lcom/tkay/expressad/foundation/g/f/c;

    new-instance v1, Lcom/tkay/expressad/foundation/g/f/a/a;

    const/4 v2, 0x4

    const/4 v3, 0x0

    invoke-direct {v1, v2, v3}, Lcom/tkay/expressad/foundation/g/f/a/a;-><init>(ILcom/tkay/expressad/foundation/g/f/f/c;)V

    invoke-interface {v0, p1, v1}, Lcom/tkay/expressad/foundation/g/f/c;->a(Lcom/tkay/expressad/foundation/g/f/i;Lcom/tkay/expressad/foundation/g/f/a/a;)V

    return-void

    :catch_1
    move-exception v0

    .line 53
    iget-object v1, p0, Lcom/tkay/expressad/foundation/g/f/h;->d:Lcom/tkay/expressad/foundation/g/f/c;

    invoke-static {v0}, Lcom/tkay/expressad/foundation/g/f/i;->a(Lcom/tkay/expressad/foundation/g/f/a/a;)Lcom/tkay/expressad/foundation/g/f/a/a;

    move-result-object v0

    invoke-interface {v1, p1, v0}, Lcom/tkay/expressad/foundation/g/f/c;->a(Lcom/tkay/expressad/foundation/g/f/i;Lcom/tkay/expressad/foundation/g/f/a/a;)V

    return-void
.end method


# virtual methods
.method public final a(Lcom/tkay/expressad/foundation/g/f/i;)V
    .locals 4

    const/16 v0, 0xa

    .line 31
    invoke-static {v0}, Landroid/os/Process;->setThreadPriority(I)V

    .line 1038
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/f/h;->d:Lcom/tkay/expressad/foundation/g/f/c;

    invoke-interface {v0, p1}, Lcom/tkay/expressad/foundation/g/f/c;->c(Lcom/tkay/expressad/foundation/g/f/i;)V

    .line 1040
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/g/f/i;->f()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1041
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/g/f/i;->c()V

    .line 1042
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/f/h;->d:Lcom/tkay/expressad/foundation/g/f/c;

    invoke-interface {v0, p1}, Lcom/tkay/expressad/foundation/g/f/c;->b(Lcom/tkay/expressad/foundation/g/f/i;)V

    .line 1043
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/f/h;->d:Lcom/tkay/expressad/foundation/g/f/c;

    invoke-interface {v0, p1}, Lcom/tkay/expressad/foundation/g/f/c;->a(Lcom/tkay/expressad/foundation/g/f/i;)V

    return-void

    .line 1047
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/f/h;->d:Lcom/tkay/expressad/foundation/g/f/c;

    invoke-interface {v0, p1}, Lcom/tkay/expressad/foundation/g/f/c;->d(Lcom/tkay/expressad/foundation/g/f/i;)V

    .line 1048
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/f/h;->c:Lcom/tkay/expressad/foundation/g/f/g;

    invoke-interface {v0, p1}, Lcom/tkay/expressad/foundation/g/f/g;->a(Lcom/tkay/expressad/foundation/g/f/i;)Lcom/tkay/expressad/foundation/g/f/f/c;

    move-result-object v0

    .line 1049
    invoke-virtual {p1, v0}, Lcom/tkay/expressad/foundation/g/f/i;->a(Lcom/tkay/expressad/foundation/g/f/f/c;)Lcom/tkay/expressad/foundation/g/f/k;

    move-result-object v0

    .line 1050
    iget-object v1, p0, Lcom/tkay/expressad/foundation/g/f/h;->d:Lcom/tkay/expressad/foundation/g/f/c;

    invoke-interface {v1, p1, v0}, Lcom/tkay/expressad/foundation/g/f/c;->a(Lcom/tkay/expressad/foundation/g/f/i;Lcom/tkay/expressad/foundation/g/f/k;)V
    :try_end_0
    .catch Lcom/tkay/expressad/foundation/g/f/a/a; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 1055
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "Unhandled exception "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1056
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/f/h;->d:Lcom/tkay/expressad/foundation/g/f/c;

    new-instance v1, Lcom/tkay/expressad/foundation/g/f/a/a;

    const/4 v2, 0x4

    const/4 v3, 0x0

    invoke-direct {v1, v2, v3}, Lcom/tkay/expressad/foundation/g/f/a/a;-><init>(ILcom/tkay/expressad/foundation/g/f/f/c;)V

    invoke-interface {v0, p1, v1}, Lcom/tkay/expressad/foundation/g/f/c;->a(Lcom/tkay/expressad/foundation/g/f/i;Lcom/tkay/expressad/foundation/g/f/a/a;)V

    return-void

    :catch_1
    move-exception v0

    .line 1053
    iget-object v1, p0, Lcom/tkay/expressad/foundation/g/f/h;->d:Lcom/tkay/expressad/foundation/g/f/c;

    invoke-static {v0}, Lcom/tkay/expressad/foundation/g/f/i;->a(Lcom/tkay/expressad/foundation/g/f/a/a;)Lcom/tkay/expressad/foundation/g/f/a/a;

    move-result-object v0

    invoke-interface {v1, p1, v0}, Lcom/tkay/expressad/foundation/g/f/c;->a(Lcom/tkay/expressad/foundation/g/f/i;Lcom/tkay/expressad/foundation/g/f/a/a;)V

    return-void
.end method
