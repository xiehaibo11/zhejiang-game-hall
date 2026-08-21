.class final Lcom/tkay/core/common/a/b$3;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/a/b;->b()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/common/a/b;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/a/b;)V
    .locals 0

    .line 70
    iput-object p1, p0, Lcom/tkay/core/common/a/b$3;->a:Lcom/tkay/core/common/a/b;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 1

    .line 73
    iget-object v0, p0, Lcom/tkay/core/common/a/b$3;->a:Lcom/tkay/core/common/a/b;

    invoke-static {v0}, Lcom/tkay/core/common/a/b;->a(Lcom/tkay/core/common/a/b;)Lcom/tkay/core/common/c/f;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/c/f;->c()V

    return-void
.end method
