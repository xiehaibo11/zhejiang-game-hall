.class final Lcom/tkay/core/common/i/c$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/i/c;->b(Lcom/tkay/core/api/AdError;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/common/i/c;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/i/c;)V
    .locals 0

    .line 197
    iput-object p1, p0, Lcom/tkay/core/common/i/c$1;->a:Lcom/tkay/core/common/i/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    .line 200
    iget-object v0, p0, Lcom/tkay/core/common/i/c$1;->a:Lcom/tkay/core/common/i/c;

    invoke-static {v0}, Lcom/tkay/core/common/i/c;->a(Lcom/tkay/core/common/i/c;)Lcom/tkay/core/common/h/k;

    move-result-object v1

    const/4 v2, 0x0

    invoke-virtual {v0, v2, v1}, Lcom/tkay/core/common/i/c;->a(ILcom/tkay/core/common/h/k;)V

    return-void
.end method
