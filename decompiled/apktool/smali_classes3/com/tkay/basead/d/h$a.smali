.class final Lcom/tkay/basead/d/h$a;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/basead/ui/BaseMediaATView$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/basead/d/h;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "a"
.end annotation


# instance fields
.field private final a:Lcom/tkay/basead/ui/BaseMediaATView$a;


# direct methods
.method public constructor <init>(Lcom/tkay/basead/ui/BaseMediaATView$a;)V
    .locals 0

    .line 758
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 759
    iput-object p1, p0, Lcom/tkay/basead/d/h$a;->a:Lcom/tkay/basead/ui/BaseMediaATView$a;

    return-void
.end method


# virtual methods
.method public final onClickCloseView()V
    .locals 1

    .line 764
    iget-object v0, p0, Lcom/tkay/basead/d/h$a;->a:Lcom/tkay/basead/ui/BaseMediaATView$a;

    if-eqz v0, :cond_0

    .line 765
    invoke-interface {v0}, Lcom/tkay/basead/ui/BaseMediaATView$a;->onClickCloseView()V

    :cond_0
    return-void
.end method
