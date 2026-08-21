.class public final Lcom/tkay/expressad/advanced/d/d;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/advanced/b/b;


# static fields
.field private static final a:Ljava/lang/String; = "NativeAdvancedShowListenerImpl"


# instance fields
.field private b:Lcom/tkay/expressad/out/i;

.field private c:Lcom/tkay/expressad/foundation/d/c;

.field private d:Z

.field private e:Lcom/tkay/expressad/advanced/d/c;


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/advanced/d/c;Lcom/tkay/expressad/out/i;DLcom/tkay/expressad/foundation/d/c;)V
    .locals 0

    .line 23
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 24
    iput-object p1, p0, Lcom/tkay/expressad/advanced/d/d;->e:Lcom/tkay/expressad/advanced/d/c;

    .line 25
    iput-object p2, p0, Lcom/tkay/expressad/advanced/d/d;->b:Lcom/tkay/expressad/out/i;

    .line 26
    iput-object p5, p0, Lcom/tkay/expressad/advanced/d/d;->c:Lcom/tkay/expressad/foundation/d/c;

    .line 27
    invoke-static {p3, p4, p5}, Lcom/tkay/expressad/advanced/d/d;->a(DLcom/tkay/expressad/foundation/d/c;)Z

    move-result p1

    iput-boolean p1, p0, Lcom/tkay/expressad/advanced/d/d;->d:Z

    return-void
.end method

.method private static a(DLcom/tkay/expressad/foundation/d/c;)Z
    .locals 8

    const/4 v0, 0x0

    .line 112
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    invoke-static {}, Lcom/tkay/expressad/d/b;->c()Lcom/tkay/expressad/d/a;

    move-result-object v1

    .line 114
    invoke-virtual {v1}, Lcom/tkay/expressad/d/a;->l()J

    move-result-wide v2

    const-wide/16 v4, 0x3e8

    mul-long/2addr v2, v4

    .line 115
    invoke-virtual {v1}, Lcom/tkay/expressad/d/a;->x()J

    move-result-wide v6

    mul-long/2addr v6, v4

    .line 119
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v4, "cbp : "

    invoke-direct {v1, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, p0, p1}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    const-string v4, " plct : "

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v6, v7}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v4, " plctb : "

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const/4 v1, 0x1

    if-eqz p2, :cond_1

    .line 122
    invoke-virtual {p2, v6, v7, v2, v3}, Lcom/tkay/expressad/foundation/d/c;->a(JJ)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 123
    invoke-virtual {p2, v1}, Lcom/tkay/expressad/foundation/d/c;->e(I)V

    return v1

    .line 126
    :cond_0
    invoke-virtual {p2, v0}, Lcom/tkay/expressad/foundation/d/c;->e(I)V

    :cond_1
    if-eqz p2, :cond_4

    .line 130
    invoke-virtual {p2}, Lcom/tkay/expressad/foundation/d/c;->A()Z

    move-result p2

    if-nez p2, :cond_4

    const-wide/high16 v2, 0x3ff0000000000000L    # 1.0

    cmpl-double p2, p0, v2

    if-nez p2, :cond_2

    return v0

    .line 135
    :cond_2
    new-instance p2, Ljava/util/Random;

    invoke-direct {p2}, Ljava/util/Random;-><init>()V

    invoke-virtual {p2}, Ljava/util/Random;->nextDouble()D

    move-result-wide v2

    .line 137
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v4, "hit : "

    invoke-direct {p2, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, v2, v3}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    const-string v4, " "

    invoke-virtual {p2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    cmpl-double p0, v2, p0

    if-lez p0, :cond_3

    move p1, v1

    goto :goto_0

    :cond_3
    move p1, v0

    :goto_0
    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-lez p0, :cond_4

    return v1

    :catch_0
    :cond_4
    return v0
.end method

.method private g()V
    .locals 1

    .line 93
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/d;->b:Lcom/tkay/expressad/out/i;

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    .line 94
    iput-object v0, p0, Lcom/tkay/expressad/advanced/d/d;->b:Lcom/tkay/expressad/out/i;

    :cond_0
    return-void
.end method


# virtual methods
.method public final a()V
    .locals 2

    .line 32
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/d;->e:Lcom/tkay/expressad/advanced/d/c;

    if-eqz v0, :cond_0

    const/4 v1, 0x1

    .line 33
    iput-boolean v1, v0, Lcom/tkay/expressad/advanced/d/c;->d:Z

    .line 35
    :cond_0
    new-instance v0, Ljava/lang/StringBuffer;

    const-string v1, "load_to=0&allow_skip="

    .line 36
    invoke-direct {v0, v1}, Ljava/lang/StringBuffer;-><init>(Ljava/lang/String;)V

    .line 37
    iget-object v1, p0, Lcom/tkay/expressad/advanced/d/d;->e:Lcom/tkay/expressad/advanced/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/advanced/d/c;->d()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuffer;->append(I)Ljava/lang/StringBuffer;

    const-string v1, "&"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 40
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/d;->b:Lcom/tkay/expressad/out/i;

    if-eqz v0, :cond_1

    .line 41
    iget-boolean v1, p0, Lcom/tkay/expressad/advanced/d/d;->d:Z

    if-nez v1, :cond_1

    .line 42
    invoke-interface {v0}, Lcom/tkay/expressad/out/i;->b()V

    :cond_1
    return-void
.end method

.method public final a(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 2

    .line 54
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/d;->b:Lcom/tkay/expressad/out/i;

    if-eqz v0, :cond_0

    .line 55
    iget-boolean v1, p0, Lcom/tkay/expressad/advanced/d/d;->d:Z

    if-nez v1, :cond_0

    .line 56
    invoke-interface {v0, p1}, Lcom/tkay/expressad/out/i;->a(Lcom/tkay/expressad/foundation/d/c;)V

    :cond_0
    return-void
.end method

.method public final b()V
    .locals 0

    return-void
.end method

.method public final c()V
    .locals 2

    .line 63
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/d;->b:Lcom/tkay/expressad/out/i;

    if-eqz v0, :cond_0

    .line 64
    invoke-interface {v0}, Lcom/tkay/expressad/out/i;->f()V

    .line 65
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/d;->e:Lcom/tkay/expressad/advanced/d/c;

    if-eqz v0, :cond_0

    const/4 v1, 0x0

    .line 66
    iput-boolean v1, v0, Lcom/tkay/expressad/advanced/d/c;->d:Z

    :cond_0
    return-void
.end method

.method public final d()V
    .locals 0

    return-void
.end method

.method public final e()V
    .locals 0

    return-void
.end method

.method public final f()V
    .locals 0

    return-void
.end method
