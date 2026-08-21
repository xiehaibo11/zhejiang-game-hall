.class final Lcom/tkay/core/common/n$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/n;->a(Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/common/n;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/n;)V
    .locals 0

    .line 116
    iput-object p1, p0, Lcom/tkay/core/common/n$1;->a:Lcom/tkay/core/common/n;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 1

    .line 122
    iget-object v0, p0, Lcom/tkay/core/common/n$1;->a:Lcom/tkay/core/common/n;

    iget-object v0, v0, Lcom/tkay/core/common/n;->a:Lcom/tkay/core/common/c/h;

    invoke-virtual {v0}, Lcom/tkay/core/common/c/h;->c()V

    return-void
.end method
