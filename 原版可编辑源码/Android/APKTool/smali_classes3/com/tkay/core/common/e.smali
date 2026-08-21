.class public final Lcom/tkay/core/common/e;
.super Ljava/lang/IllegalStateException;


# instance fields
.field public a:Lcom/tkay/core/api/AdError;

.field public b:Ljava/lang/String;


# direct methods
.method public constructor <init>(Lcom/tkay/core/api/AdError;Ljava/lang/String;)V
    .locals 0

    .line 17
    invoke-direct {p0}, Ljava/lang/IllegalStateException;-><init>()V

    .line 18
    iput-object p1, p0, Lcom/tkay/core/common/e;->a:Lcom/tkay/core/api/AdError;

    .line 19
    iput-object p2, p0, Lcom/tkay/core/common/e;->b:Ljava/lang/String;

    return-void
.end method
