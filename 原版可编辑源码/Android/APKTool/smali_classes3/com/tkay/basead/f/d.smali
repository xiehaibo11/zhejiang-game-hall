.class public Lcom/tkay/basead/f/d;
.super Lcom/tkay/basead/f/c;


# static fields
.field public static final a:Ljava/lang/String;


# instance fields
.field private k:Lcom/tkay/basead/e/g;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 27
    const-class v0, Lcom/tkay/basead/f/d;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/basead/f/d;->a:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Ljava/lang/String;Z)V
    .locals 0

    .line 32
    invoke-direct {p0, p1, p2, p3, p4}, Lcom/tkay/basead/f/c;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Ljava/lang/String;Z)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/basead/f/d;)Lcom/tkay/basead/e/g;
    .locals 0

    .line 25
    iget-object p0, p0, Lcom/tkay/basead/f/d;->k:Lcom/tkay/basead/e/g;

    return-object p0
.end method


# virtual methods
.method public final a(Landroid/app/Activity;Ljava/util/Map;)V
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/app/Activity;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    .line 44
    :try_start_0
    iget-object v0, p0, Lcom/tkay/basead/f/d;->c:Landroid/content/Context;

    if-nez v0, :cond_1

    .line 45
    iget-object p1, p0, Lcom/tkay/basead/f/d;->k:Lcom/tkay/basead/e/g;

    if-eqz p1, :cond_0

    .line 46
    iget-object p1, p0, Lcom/tkay/basead/f/d;->k:Lcom/tkay/basead/e/g;

    const-string p2, "30001"

    const-string v0, "context = null!"

    invoke-static {p2, v0}, Lcom/tkay/basead/c/f;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/basead/c/e;

    move-result-object p2

    invoke-interface {p1, p2}, Lcom/tkay/basead/e/g;->onShowFailed(Lcom/tkay/basead/c/e;)V

    :cond_0
    return-void

    :cond_1
    const-string v0, "extra_request_id"

    .line 51
    invoke-interface {p2, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    const-string v0, "extra_scenario"

    .line 52
    invoke-interface {p2, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "extra_orientation"

    .line 53
    invoke-interface {p2, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Ljava/lang/Integer;

    invoke-virtual {p2}, Ljava/lang/Integer;->intValue()I

    move-result p2

    .line 54
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/tkay/basead/f/d;->d:Lcom/tkay/core/common/f/i;

    iget-object v2, v2, Lcom/tkay/core/common/f/i;->b:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/tkay/basead/f/d;->e:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    invoke-virtual {v1, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 55
    invoke-static {}, Lcom/tkay/basead/e/b;->a()Lcom/tkay/basead/e/b;

    move-result-object v2

    new-instance v3, Lcom/tkay/basead/f/d$1;

    invoke-direct {v3, p0, v1}, Lcom/tkay/basead/f/d$1;-><init>(Lcom/tkay/basead/f/d;Ljava/lang/String;)V

    invoke-virtual {v2, v1, v3}, Lcom/tkay/basead/e/b;->a(Ljava/lang/String;Lcom/tkay/basead/e/b$b;)V

    .line 119
    new-instance v2, Lcom/tkay/core/basead/b/a;

    invoke-direct {v2}, Lcom/tkay/core/basead/b/a;-><init>()V

    .line 120
    iget-object v3, p0, Lcom/tkay/basead/f/d;->g:Lcom/tkay/core/common/f/r;

    iput-object v3, v2, Lcom/tkay/core/basead/b/a;->c:Lcom/tkay/core/common/f/h;

    .line 121
    iput-object v1, v2, Lcom/tkay/core/basead/b/a;->d:Ljava/lang/String;

    const/4 v1, 0x3

    .line 122
    iput v1, v2, Lcom/tkay/core/basead/b/a;->a:I

    .line 123
    iget-object v1, p0, Lcom/tkay/basead/f/d;->d:Lcom/tkay/core/common/f/i;

    iput-object v1, v2, Lcom/tkay/core/basead/b/a;->h:Lcom/tkay/core/common/f/i;

    .line 124
    iput p2, v2, Lcom/tkay/core/basead/b/a;->e:I

    .line 125
    iput-object v0, v2, Lcom/tkay/core/basead/b/a;->b:Ljava/lang/String;

    .line 127
    invoke-static {p1, v2}, Lcom/tkay/basead/ui/BaseATActivity;->a(Landroid/app/Activity;Lcom/tkay/core/basead/b/a;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    .line 129
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 130
    iget-object p2, p0, Lcom/tkay/basead/f/d;->k:Lcom/tkay/basead/e/g;

    if-eqz p2, :cond_2

    .line 131
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    const-string v0, "-9999"

    invoke-static {v0, p1}, Lcom/tkay/basead/c/f;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/basead/c/e;

    move-result-object p1

    invoke-interface {p2, p1}, Lcom/tkay/basead/e/g;->onShowFailed(Lcom/tkay/basead/c/e;)V

    :cond_2
    return-void
.end method

.method public final a(Lcom/tkay/basead/e/g;)V
    .locals 0

    .line 36
    iput-object p1, p0, Lcom/tkay/basead/f/d;->k:Lcom/tkay/basead/e/g;

    return-void
.end method
