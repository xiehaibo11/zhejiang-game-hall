.class final Lcom/tkay/core/common/l/b/a$2;
.super Lcom/tkay/core/common/l/b/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/l/b/a;->b(Ljava/lang/Runnable;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/Runnable;

.field final synthetic b:Lcom/tkay/core/common/l/b/a;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/l/b/a;Ljava/lang/Runnable;)V
    .locals 0

    .line 137
    iput-object p1, p0, Lcom/tkay/core/common/l/b/a$2;->b:Lcom/tkay/core/common/l/b/a;

    iput-object p2, p0, Lcom/tkay/core/common/l/b/a$2;->a:Ljava/lang/Runnable;

    invoke-direct {p0}, Lcom/tkay/core/common/l/b/b;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 1

    .line 140
    iget-object v0, p0, Lcom/tkay/core/common/l/b/a$2;->a:Ljava/lang/Runnable;

    invoke-interface {v0}, Ljava/lang/Runnable;->run()V

    return-void
.end method
