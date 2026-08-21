.class public final Lcom/tkay/expressad/foundation/g/c/e;
.super Lcom/tkay/expressad/foundation/g/c/b;


# static fields
.field private static final b:Ljava/lang/String; = "tkay_template/"

.field private static final c:Ljava/lang/String; = "tkay_template/res/.tkay700"

.field private static final d:Ljava/lang/String; = "tkay_template/res/res"

.field private static final e:Ljava/lang/String; = "tkay_template/res/html"


# direct methods
.method private constructor <init>(Ljava/lang/String;)V
    .locals 1

    .line 13
    invoke-direct {p0, p1}, Lcom/tkay/expressad/foundation/g/c/b;-><init>(Ljava/lang/String;)V

    .line 14
    iget-object p1, p0, Lcom/tkay/expressad/foundation/g/c/e;->a:Lcom/tkay/expressad/foundation/g/c/a;

    sget-object v0, Lcom/tkay/expressad/foundation/g/c/c;->b:Lcom/tkay/expressad/foundation/g/c/c;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/foundation/g/c/a;->a(Lcom/tkay/expressad/foundation/g/c/c;)V

    return-void
.end method


# virtual methods
.method protected final b()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/g/c/a;",
            ">;"
        }
    .end annotation

    .line 20
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    return-object v0
.end method
