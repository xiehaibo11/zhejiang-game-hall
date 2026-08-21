.class public final Lcom/tkay/expressad/videocommon/b/m;
.super Ljava/lang/Object;


# instance fields
.field private a:Ljava/lang/String;

.field private b:I

.field private c:I

.field private d:Lcom/tkay/core/common/res/a/a;


# direct methods
.method public constructor <init>(Ljava/lang/String;II)V
    .locals 1

    .line 14
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 15
    iput-object p1, p0, Lcom/tkay/expressad/videocommon/b/m;->a:Ljava/lang/String;

    .line 16
    iput p2, p0, Lcom/tkay/expressad/videocommon/b/m;->b:I

    .line 17
    iput p3, p0, Lcom/tkay/expressad/videocommon/b/m;->c:I

    .line 19
    invoke-static {}, Lcom/tkay/core/common/res/a/c;->a()Lcom/tkay/core/common/res/a/c;

    move-result-object p1

    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/m;->a:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/tkay/core/common/res/a/c;->a(Ljava/lang/String;)Lcom/tkay/core/common/res/a/a;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/videocommon/b/m;->d:Lcom/tkay/core/common/res/a/a;

    .line 20
    new-instance v0, Lcom/tkay/core/common/res/a/b;

    invoke-direct {v0, p2, p3}, Lcom/tkay/core/common/res/a/b;-><init>(II)V

    invoke-virtual {p1, v0}, Lcom/tkay/core/common/res/a/a;->a(Lcom/tkay/core/common/res/a/b;)V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 1

    .line 28
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/m;->d:Lcom/tkay/core/common/res/a/a;

    invoke-virtual {v0}, Lcom/tkay/core/common/res/a/a;->e()V

    return-void
.end method

.method public final a(Lcom/tkay/core/common/res/a/a$a;)V
    .locals 1

    .line 24
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/m;->d:Lcom/tkay/core/common/res/a/a;

    invoke-virtual {v0, p1}, Lcom/tkay/core/common/res/a/a;->a(Lcom/tkay/core/common/res/a/a$a;)V

    return-void
.end method

.method public final b()V
    .locals 1

    .line 32
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/m;->d:Lcom/tkay/core/common/res/a/a;

    invoke-virtual {v0}, Lcom/tkay/core/common/res/a/a;->f()V

    return-void
.end method
