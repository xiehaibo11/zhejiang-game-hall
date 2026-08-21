.class final Lcom/tkay/basead/ui/BaseATView$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/basead/a/c$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/ui/BaseATView;->b(I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:I

.field final synthetic b:Lcom/tkay/basead/ui/BaseATView;


# direct methods
.method constructor <init>(Lcom/tkay/basead/ui/BaseATView;I)V
    .locals 0

    .line 145
    iput-object p1, p0, Lcom/tkay/basead/ui/BaseATView$2;->b:Lcom/tkay/basead/ui/BaseATView;

    iput p2, p0, Lcom/tkay/basead/ui/BaseATView$2;->a:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 5

    .line 148
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATView$2;->b:Lcom/tkay/basead/ui/BaseATView;

    iget v1, p0, Lcom/tkay/basead/ui/BaseATView$2;->a:I

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/BaseATView;->a(I)V

    .line 149
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATView$2;->b:Lcom/tkay/basead/ui/BaseATView;

    .line 1251
    iget-object v1, v0, Lcom/tkay/basead/ui/BaseATView;->d:Lcom/tkay/core/common/f/h;

    instance-of v1, v1, Lcom/tkay/core/common/f/z;

    if-eqz v1, :cond_1

    iget-object v1, v0, Lcom/tkay/basead/ui/BaseATView;->c:Lcom/tkay/core/common/f/i;

    iget v1, v1, Lcom/tkay/core/common/f/i;->f:I

    const/16 v2, 0x43

    if-ne v1, v2, :cond_1

    .line 1252
    iget-object v1, v0, Lcom/tkay/basead/ui/BaseATView;->d:Lcom/tkay/core/common/f/h;

    check-cast v1, Lcom/tkay/core/common/f/z;

    const/4 v2, 0x1

    const/4 v3, 0x0

    invoke-virtual {v1, v2, v3}, Lcom/tkay/core/common/f/z;->a(ZZ)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 1253
    invoke-virtual {v0}, Lcom/tkay/basead/ui/BaseATView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/common/d/c;->a(Landroid/content/Context;)Lcom/tkay/core/common/d/c;

    move-result-object v1

    iget-object v4, v0, Lcom/tkay/basead/ui/BaseATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v4}, Lcom/tkay/core/common/f/h;->p()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v4, v2, v3}, Lcom/tkay/core/common/d/c;->a(Ljava/lang/String;II)V

    .line 1255
    :cond_0
    iget-object v1, v0, Lcom/tkay/basead/ui/BaseATView;->d:Lcom/tkay/core/common/f/h;

    check-cast v1, Lcom/tkay/core/common/f/z;

    invoke-virtual {v1, v3, v3}, Lcom/tkay/core/common/f/z;->a(ZZ)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 1256
    invoke-virtual {v0}, Lcom/tkay/basead/ui/BaseATView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/common/d/b;->a(Landroid/content/Context;)Lcom/tkay/core/common/d/a;

    move-result-object v1

    iget-object v0, v0, Lcom/tkay/basead/ui/BaseATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->q()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0, v2, v3}, Lcom/tkay/core/common/d/a;->a(Ljava/lang/String;II)V

    :cond_1
    return-void
.end method

.method public final a(Z)V
    .locals 1

    .line 164
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATView$2;->b:Lcom/tkay/basead/ui/BaseATView;

    invoke-virtual {v0, p1}, Lcom/tkay/basead/ui/BaseATView;->a(Z)V

    return-void
.end method

.method public final b()V
    .locals 1

    .line 154
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATView$2;->b:Lcom/tkay/basead/ui/BaseATView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/BaseATView;->f()V

    return-void
.end method

.method public final c()V
    .locals 1

    .line 159
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATView$2;->b:Lcom/tkay/basead/ui/BaseATView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/BaseATView;->g()V

    return-void
.end method
