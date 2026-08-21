.class final Lcom/tkay/basead/a/b/f$1;
.super Lcom/tkay/core/common/res/a/a$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/a/b/f;-><init>(Ljava/lang/String;Lcom/tkay/core/common/f/h;Lcom/tkay/core/common/f/j;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/a/b/f;


# direct methods
.method constructor <init>(Lcom/tkay/basead/a/b/f;)V
    .locals 0

    .line 39
    iput-object p1, p0, Lcom/tkay/basead/a/b/f$1;->a:Lcom/tkay/basead/a/b/f;

    invoke-direct {p0}, Lcom/tkay/core/common/res/a/a$a;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public final a(IJJ)Z
    .locals 0

    .line 42
    iget-object p2, p0, Lcom/tkay/basead/a/b/f$1;->a:Lcom/tkay/basead/a/b/f;

    invoke-static {p2}, Lcom/tkay/basead/a/b/f;->a(Lcom/tkay/basead/a/b/f;)Lcom/tkay/core/common/f/j;

    move-result-object p2

    invoke-virtual {p2}, Lcom/tkay/core/common/f/j;->S()I

    move-result p2

    if-lt p1, p2, :cond_0

    .line 43
    invoke-static {}, Lcom/tkay/basead/a/b/d;->a()Lcom/tkay/basead/a/b/d;

    move-result-object p2

    iget-object p3, p0, Lcom/tkay/basead/a/b/f$1;->a:Lcom/tkay/basead/a/b/f;

    invoke-static {p3}, Lcom/tkay/basead/a/b/f;->b(Lcom/tkay/basead/a/b/f;)Ljava/lang/String;

    move-result-object p3

    invoke-virtual {p2, p3, p1}, Lcom/tkay/basead/a/b/d;->a(Ljava/lang/String;I)V

    const/4 p1, 0x1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method
