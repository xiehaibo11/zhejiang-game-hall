.class public Lcom/tkay/expressad/splash/d/d;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/splash/b/d;


# static fields
.field private static final a:Ljava/lang/String; = "SplashShowListenerImpl"


# instance fields
.field private b:Lcom/tkay/expressad/out/q;

.field private c:Lcom/tkay/expressad/foundation/d/c;

.field private d:Z

.field private e:Lcom/tkay/expressad/splash/d/c;


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/splash/d/c;Lcom/tkay/expressad/out/q;DLcom/tkay/expressad/foundation/d/c;)V
    .locals 0

    .line 23
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 24
    iput-object p1, p0, Lcom/tkay/expressad/splash/d/d;->e:Lcom/tkay/expressad/splash/d/c;

    .line 25
    iput-object p2, p0, Lcom/tkay/expressad/splash/d/d;->b:Lcom/tkay/expressad/out/q;

    .line 26
    iput-object p5, p0, Lcom/tkay/expressad/splash/d/d;->c:Lcom/tkay/expressad/foundation/d/c;

    .line 27
    invoke-static {p3, p4, p5}, Lcom/tkay/expressad/splash/d/d;->a(DLcom/tkay/expressad/foundation/d/c;)Z

    move-result p1

    iput-boolean p1, p0, Lcom/tkay/expressad/splash/d/d;->d:Z

    return-void
.end method

.method private static a(DLcom/tkay/expressad/foundation/d/c;)Z
    .locals 10

    const/4 v0, 0x0

    .line 119
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v1

    .line 120
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const-wide/16 v2, 0x0

    if-nez v1, :cond_0

    .line 121
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    invoke-static {}, Lcom/tkay/expressad/d/b;->b()Lcom/tkay/expressad/d/a;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 123
    invoke-virtual {v1}, Lcom/tkay/expressad/d/a;->l()J

    move-result-wide v2

    const-wide/16 v4, 0x3e8

    mul-long/2addr v2, v4

    .line 124
    invoke-virtual {v1}, Lcom/tkay/expressad/d/a;->x()J

    move-result-wide v6

    mul-long/2addr v4, v6

    move-wide v8, v2

    move-wide v2, v4

    move-wide v4, v8

    goto :goto_0

    :cond_0
    move-wide v4, v2

    .line 128
    :goto_0
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v6, "cbp : "

    invoke-direct {v1, v6}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, p0, p1}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    const-string v6, " plct : "

    invoke-virtual {v1, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v6, " plctb : "

    invoke-virtual {v1, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v4, v5}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const/4 v1, 0x1

    if-eqz p2, :cond_2

    .line 131
    invoke-virtual {p2, v2, v3, v4, v5}, Lcom/tkay/expressad/foundation/d/c;->a(JJ)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 132
    invoke-virtual {p2, v1}, Lcom/tkay/expressad/foundation/d/c;->e(I)V

    return v1

    .line 135
    :cond_1
    invoke-virtual {p2, v0}, Lcom/tkay/expressad/foundation/d/c;->e(I)V

    :cond_2
    if-eqz p2, :cond_5

    .line 139
    invoke-virtual {p2}, Lcom/tkay/expressad/foundation/d/c;->A()Z

    move-result p2

    if-nez p2, :cond_5

    const-wide/high16 v2, 0x3ff0000000000000L    # 1.0

    cmpl-double p2, p0, v2

    if-nez p2, :cond_3

    return v0

    .line 144
    :cond_3
    new-instance p2, Ljava/util/Random;

    invoke-direct {p2}, Ljava/util/Random;-><init>()V

    invoke-virtual {p2}, Ljava/util/Random;->nextDouble()D

    move-result-wide v2

    .line 146
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v4, "hit : "

    invoke-direct {p2, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, v2, v3}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    const-string v4, " "

    invoke-virtual {p2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    cmpl-double p0, v2, p0

    if-lez p0, :cond_4

    move p1, v1

    goto :goto_1

    :cond_4
    move p1, v0

    :goto_1
    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-lez p0, :cond_5

    return v1

    :catch_0
    :cond_5
    return v0
.end method

.method private static d()V
    .locals 0

    return-void
.end method

.method private static e()V
    .locals 0

    return-void
.end method

.method private f()V
    .locals 1

    .line 102
    iget-object v0, p0, Lcom/tkay/expressad/splash/d/d;->b:Lcom/tkay/expressad/out/q;

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    .line 103
    iput-object v0, p0, Lcom/tkay/expressad/splash/d/d;->b:Lcom/tkay/expressad/out/q;

    :cond_0
    return-void
.end method


# virtual methods
.method public final a()V
    .locals 3

    .line 32
    iget-object v0, p0, Lcom/tkay/expressad/splash/d/d;->e:Lcom/tkay/expressad/splash/d/c;

    if-eqz v0, :cond_0

    const/4 v1, 0x1

    .line 33
    iput-boolean v1, v0, Lcom/tkay/expressad/splash/d/c;->a:Z

    .line 35
    :cond_0
    new-instance v0, Ljava/lang/StringBuffer;

    const-string v1, "load_to="

    .line 36
    invoke-direct {v0, v1}, Ljava/lang/StringBuffer;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/tkay/expressad/splash/d/d;->e:Lcom/tkay/expressad/splash/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/splash/d/c;->c()J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuffer;->append(J)Ljava/lang/StringBuffer;

    const-string v1, "&allow_skip="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 37
    iget-object v1, p0, Lcom/tkay/expressad/splash/d/d;->e:Lcom/tkay/expressad/splash/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/splash/d/c;->d()Z

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuffer;->append(I)Ljava/lang/StringBuffer;

    const-string v1, "&countdown="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 38
    iget-object v1, p0, Lcom/tkay/expressad/splash/d/d;->e:Lcom/tkay/expressad/splash/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/splash/d/c;->e()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuffer;->append(I)Ljava/lang/StringBuffer;

    const-string v1, "&"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 40
    iget-object v0, p0, Lcom/tkay/expressad/splash/d/d;->b:Lcom/tkay/expressad/out/q;

    if-eqz v0, :cond_1

    .line 41
    iget-boolean v1, p0, Lcom/tkay/expressad/splash/d/d;->d:Z

    if-nez v1, :cond_1

    .line 42
    invoke-interface {v0}, Lcom/tkay/expressad/out/q;->a()V

    :cond_1
    return-void
.end method

.method public final a(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 2

    .line 60
    iget-object v0, p0, Lcom/tkay/expressad/splash/d/d;->b:Lcom/tkay/expressad/out/q;

    if-eqz v0, :cond_0

    .line 61
    iget-boolean v1, p0, Lcom/tkay/expressad/splash/d/d;->d:Z

    if-nez v1, :cond_0

    .line 62
    invoke-interface {v0, p1}, Lcom/tkay/expressad/out/q;->a(Lcom/tkay/expressad/foundation/d/c;)V

    :cond_0
    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 2

    .line 49
    iget-object v0, p0, Lcom/tkay/expressad/splash/d/d;->e:Lcom/tkay/expressad/splash/d/c;

    if-eqz v0, :cond_0

    const/4 v1, 0x0

    .line 50
    iput-boolean v1, v0, Lcom/tkay/expressad/splash/d/c;->a:Z

    .line 53
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/splash/d/d;->b:Lcom/tkay/expressad/out/q;

    if-eqz v0, :cond_1

    .line 54
    invoke-interface {v0, p1}, Lcom/tkay/expressad/out/q;->a(Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method public final b()V
    .locals 2

    .line 70
    iget-object v0, p0, Lcom/tkay/expressad/splash/d/d;->b:Lcom/tkay/expressad/out/q;

    if-eqz v0, :cond_0

    .line 71
    invoke-interface {v0}, Lcom/tkay/expressad/out/q;->b()V

    .line 73
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/splash/d/d;->e:Lcom/tkay/expressad/splash/d/c;

    if-eqz v0, :cond_1

    const/4 v1, 0x0

    .line 74
    iput-boolean v1, v0, Lcom/tkay/expressad/splash/d/c;->a:Z

    :cond_1
    return-void
.end method

.method public final c()V
    .locals 0

    return-void
.end method
