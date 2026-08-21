.class final Lcom/tkay/core/common/m$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/core/common/m;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "a"
.end annotation


# instance fields
.field final a:Landroid/content/Intent;

.field final b:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Lcom/tkay/core/common/m$b;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method constructor <init>(Landroid/content/Intent;Ljava/util/ArrayList;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Intent;",
            "Ljava/util/ArrayList<",
            "Lcom/tkay/core/common/m$b;",
            ">;)V"
        }
    .end annotation

    .line 243
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 244
    iput-object p1, p0, Lcom/tkay/core/common/m$a;->a:Landroid/content/Intent;

    .line 245
    iput-object p2, p0, Lcom/tkay/core/common/m$a;->b:Ljava/util/ArrayList;

    return-void
.end method
