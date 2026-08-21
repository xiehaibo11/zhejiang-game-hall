.class public Lcom/tkay/basead/d/d;
.super Lcom/tkay/basead/d/b;


# static fields
.field public static final a:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 33
    const-class v0, Lcom/tkay/basead/d/d;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/basead/d/d;->a:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Lcom/tkay/basead/d/b$a;Lcom/tkay/core/common/f/i;)V
    .locals 0

    .line 36
    invoke-direct {p0, p1, p2, p3}, Lcom/tkay/basead/d/b;-><init>(Landroid/content/Context;Lcom/tkay/basead/d/b$a;Lcom/tkay/core/common/f/i;)V

    return-void
.end method


# virtual methods
.method public final a(Landroid/app/Activity;Ljava/util/Map;)V
    .locals 7
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

    const/4 v0, 0x0

    .line 42
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/basead/d/d;->c()Z

    move-result v1

    if-nez v1, :cond_1

    .line 43
    iget-object p1, p0, Lcom/tkay/basead/d/d;->h:Lcom/tkay/basead/e/a;

    if-eqz p1, :cond_0

    .line 44
    iget-object p1, p0, Lcom/tkay/basead/d/d;->h:Lcom/tkay/basead/e/a;

    const-string p2, "30001"

    const-string v1, "No fill, offer = null!"

    invoke-static {p2, v1}, Lcom/tkay/basead/c/f;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/basead/c/e;

    move-result-object p2

    invoke-interface {p1, p2}, Lcom/tkay/basead/e/a;->onShowFailed(Lcom/tkay/basead/c/e;)V

    .line 46
    :cond_0
    iput-object v0, p0, Lcom/tkay/basead/d/d;->e:Lcom/tkay/core/common/f/z;

    return-void

    :cond_1
    const-string v1, "extra_scenario"

    .line 50
    invoke-interface {p2, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "extra_orientation"

    .line 51
    invoke-interface {p2, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Ljava/lang/Integer;

    invoke-virtual {p2}, Ljava/lang/Integer;->intValue()I

    move-result p2

    .line 52
    iget-object v2, p0, Lcom/tkay/basead/d/d;->e:Lcom/tkay/core/common/f/z;

    invoke-virtual {p0, v2}, Lcom/tkay/basead/d/d;->a(Lcom/tkay/core/common/f/z;)Ljava/lang/String;

    move-result-object v2

    .line 54
    iget-object v3, p0, Lcom/tkay/basead/d/d;->f:Lcom/tkay/core/common/a/g;

    instance-of v3, v3, Lcom/tkay/expressad/reward/b/a;

    if-eqz v3, :cond_2

    .line 56
    iget-object p2, p0, Lcom/tkay/basead/d/d;->f:Lcom/tkay/core/common/a/g;

    check-cast p2, Lcom/tkay/expressad/reward/b/a;

    new-instance v2, Lcom/tkay/basead/d/d$1;

    invoke-direct {v2, p0, v1}, Lcom/tkay/basead/d/d$1;-><init>(Lcom/tkay/basead/d/d;Ljava/lang/String;)V

    invoke-virtual {p2, v2}, Lcom/tkay/expressad/reward/b/a;->a(Lcom/tkay/expressad/videocommon/d/a;)V

    .line 128
    iget-object p2, p0, Lcom/tkay/basead/d/d;->f:Lcom/tkay/core/common/a/g;

    move-object v1, p2

    check-cast v1, Lcom/tkay/expressad/reward/b/a;

    const-string v3, ""

    const-string v4, ""

    const-string v5, ""

    iget-object v6, p0, Lcom/tkay/basead/d/d;->c:Lcom/tkay/core/common/f/i;

    move-object v2, p1

    invoke-virtual/range {v1 .. v6}, Lcom/tkay/expressad/reward/b/a;->a(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/common/f/i;)V

    return-void

    .line 134
    :cond_2
    invoke-static {}, Lcom/tkay/basead/e/b;->a()Lcom/tkay/basead/e/b;

    move-result-object v3

    new-instance v4, Lcom/tkay/basead/d/d$2;

    invoke-direct {v4, p0, v2}, Lcom/tkay/basead/d/d$2;-><init>(Lcom/tkay/basead/d/d;Ljava/lang/String;)V

    invoke-virtual {v3, v2, v4}, Lcom/tkay/basead/e/b;->a(Ljava/lang/String;Lcom/tkay/basead/e/b$b;)V

    .line 196
    new-instance v3, Lcom/tkay/core/basead/b/a;

    invoke-direct {v3}, Lcom/tkay/core/basead/b/a;-><init>()V

    .line 197
    iget-object v4, p0, Lcom/tkay/basead/d/d;->e:Lcom/tkay/core/common/f/z;

    iput-object v4, v3, Lcom/tkay/core/basead/b/a;->c:Lcom/tkay/core/common/f/h;

    .line 198
    iput-object v2, v3, Lcom/tkay/core/basead/b/a;->d:Ljava/lang/String;

    const/4 v2, 0x3

    .line 199
    iput v2, v3, Lcom/tkay/core/basead/b/a;->a:I

    .line 200
    iget-object v2, p0, Lcom/tkay/basead/d/d;->c:Lcom/tkay/core/common/f/i;

    iput-object v2, v3, Lcom/tkay/core/basead/b/a;->h:Lcom/tkay/core/common/f/i;

    .line 201
    iput p2, v3, Lcom/tkay/core/basead/b/a;->e:I

    .line 202
    iput-object v1, v3, Lcom/tkay/core/basead/b/a;->b:Ljava/lang/String;

    .line 205
    invoke-static {p1, v3}, Lcom/tkay/basead/ui/BaseATActivity;->a(Landroid/app/Activity;Lcom/tkay/core/basead/b/a;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    .line 207
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 208
    iget-object p2, p0, Lcom/tkay/basead/d/d;->h:Lcom/tkay/basead/e/a;

    if-eqz p2, :cond_3

    .line 209
    iget-object p2, p0, Lcom/tkay/basead/d/d;->h:Lcom/tkay/basead/e/a;

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    const-string v1, "-9999"

    invoke-static {v1, p1}, Lcom/tkay/basead/c/f;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/basead/c/e;

    move-result-object p1

    invoke-interface {p2, p1}, Lcom/tkay/basead/e/a;->onShowFailed(Lcom/tkay/basead/c/e;)V

    .line 211
    :cond_3
    iput-object v0, p0, Lcom/tkay/basead/d/d;->e:Lcom/tkay/core/common/f/z;

    return-void
.end method

.method public final b()V
    .locals 1

    .line 219
    invoke-super {p0}, Lcom/tkay/basead/d/b;->b()V

    const/4 v0, 0x0

    .line 220
    iput-object v0, p0, Lcom/tkay/basead/d/d;->h:Lcom/tkay/basead/e/a;

    return-void
.end method
