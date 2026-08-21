.class public final Lcom/tkay/expressad/foundation/g/c/d;
.super Lcom/tkay/expressad/foundation/g/c/b;


# static fields
.field private static final b:Ljava/lang/String; = "tkay_template/"

.field private static final c:Ljava/lang/String; = "tkay_template/res/Movies"

.field private static final d:Ljava/lang/String; = "tkay_template/res"

.field private static final e:Ljava/lang/String; = "tkay_template/res/.Tkay_VC"

.field private static final f:Ljava/lang/String; = "tkay_template/res/.tkay700"

.field private static final g:Ljava/lang/String; = "tkay_template/res/img"

.field private static final h:Ljava/lang/String; = "tkay_template/crashinfo"

.field private static final i:Ljava/lang/String; = "tkay_template/other"

.field private static final j:Ljava/lang/String; = "tkay_template/res/xml"

.field private static final k:Ljava/lang/String; = "tkay_template/tkay/config"

.field private static final l:Ljava/lang/String; = "tkay_template/res/res"

.field private static final m:Ljava/lang/String; = "tkay_template/res/html"


# direct methods
.method public constructor <init>(Ljava/lang/String;)V
    .locals 0

    .line 21
    invoke-direct {p0, p1}, Lcom/tkay/expressad/foundation/g/c/b;-><init>(Ljava/lang/String;)V

    return-void
.end method


# virtual methods
.method protected final b()Ljava/util/List;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/g/c/a;",
            ">;"
        }
    .end annotation

    .line 26
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 27
    sget-object v1, Lcom/tkay/expressad/foundation/g/c/c;->l:Lcom/tkay/expressad/foundation/g/c/c;

    const-string v2, "tkay_template/res"

    invoke-static {v0, v1, v2}, Lcom/tkay/expressad/foundation/g/c/d;->a(Ljava/util/ArrayList;Lcom/tkay/expressad/foundation/g/c/c;Ljava/lang/String;)Lcom/tkay/expressad/foundation/g/c/a;

    .line 29
    sget-object v1, Lcom/tkay/expressad/foundation/g/c/c;->c:Lcom/tkay/expressad/foundation/g/c/c;

    const-string v2, "tkay_template/res/Movies"

    invoke-static {v0, v1, v2}, Lcom/tkay/expressad/foundation/g/c/d;->a(Ljava/util/ArrayList;Lcom/tkay/expressad/foundation/g/c/c;Ljava/lang/String;)Lcom/tkay/expressad/foundation/g/c/a;

    move-result-object v1

    .line 30
    sget-object v2, Lcom/tkay/expressad/foundation/g/c/c;->d:Lcom/tkay/expressad/foundation/g/c/c;

    const-string v3, "tkay_template/res/.Tkay_VC"

    invoke-virtual {v1, v2, v3}, Lcom/tkay/expressad/foundation/g/c/a;->a(Lcom/tkay/expressad/foundation/g/c/c;Ljava/lang/String;)V

    .line 32
    sget-object v1, Lcom/tkay/expressad/foundation/g/c/c;->e:Lcom/tkay/expressad/foundation/g/c/c;

    const-string v2, "tkay_template/res/.tkay700"

    invoke-static {v0, v1, v2}, Lcom/tkay/expressad/foundation/g/c/d;->a(Ljava/util/ArrayList;Lcom/tkay/expressad/foundation/g/c/c;Ljava/lang/String;)Lcom/tkay/expressad/foundation/g/c/a;

    move-result-object v1

    .line 33
    sget-object v2, Lcom/tkay/expressad/foundation/g/c/c;->h:Lcom/tkay/expressad/foundation/g/c/c;

    const-string v3, "tkay_template/res/img"

    invoke-virtual {v1, v2, v3}, Lcom/tkay/expressad/foundation/g/c/a;->a(Lcom/tkay/expressad/foundation/g/c/c;Ljava/lang/String;)V

    .line 34
    sget-object v2, Lcom/tkay/expressad/foundation/g/c/c;->m:Lcom/tkay/expressad/foundation/g/c/c;

    const-string v3, "tkay_template/res/xml"

    invoke-virtual {v1, v2, v3}, Lcom/tkay/expressad/foundation/g/c/a;->a(Lcom/tkay/expressad/foundation/g/c/c;Ljava/lang/String;)V

    .line 35
    sget-object v2, Lcom/tkay/expressad/foundation/g/c/c;->n:Lcom/tkay/expressad/foundation/g/c/c;

    const-string v3, "tkay_template/tkay/config"

    invoke-virtual {v1, v2, v3}, Lcom/tkay/expressad/foundation/g/c/a;->a(Lcom/tkay/expressad/foundation/g/c/c;Ljava/lang/String;)V

    .line 36
    sget-object v2, Lcom/tkay/expressad/foundation/g/c/c;->g:Lcom/tkay/expressad/foundation/g/c/c;

    const-string v3, "tkay_template/res/res"

    invoke-virtual {v1, v2, v3}, Lcom/tkay/expressad/foundation/g/c/a;->a(Lcom/tkay/expressad/foundation/g/c/c;Ljava/lang/String;)V

    .line 37
    sget-object v2, Lcom/tkay/expressad/foundation/g/c/c;->i:Lcom/tkay/expressad/foundation/g/c/c;

    const-string v3, "tkay_template/res/html"

    invoke-virtual {v1, v2, v3}, Lcom/tkay/expressad/foundation/g/c/a;->a(Lcom/tkay/expressad/foundation/g/c/c;Ljava/lang/String;)V

    .line 39
    sget-object v1, Lcom/tkay/expressad/foundation/g/c/c;->k:Lcom/tkay/expressad/foundation/g/c/c;

    const-string v2, "tkay_template/other"

    invoke-static {v0, v1, v2}, Lcom/tkay/expressad/foundation/g/c/d;->a(Ljava/util/ArrayList;Lcom/tkay/expressad/foundation/g/c/c;Ljava/lang/String;)Lcom/tkay/expressad/foundation/g/c/a;

    .line 41
    sget-object v1, Lcom/tkay/expressad/foundation/g/c/c;->j:Lcom/tkay/expressad/foundation/g/c/c;

    const-string v3, "tkay_template/crashinfo"

    invoke-static {v0, v1, v3}, Lcom/tkay/expressad/foundation/g/c/d;->a(Ljava/util/ArrayList;Lcom/tkay/expressad/foundation/g/c/c;Ljava/lang/String;)Lcom/tkay/expressad/foundation/g/c/a;

    .line 42
    sget-object v1, Lcom/tkay/expressad/foundation/g/c/c;->k:Lcom/tkay/expressad/foundation/g/c/c;

    invoke-static {v0, v1, v2}, Lcom/tkay/expressad/foundation/g/c/d;->a(Ljava/util/ArrayList;Lcom/tkay/expressad/foundation/g/c/c;Ljava/lang/String;)Lcom/tkay/expressad/foundation/g/c/a;

    return-object v0
.end method
