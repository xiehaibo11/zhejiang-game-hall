.class final Lcom/tkay/basead/ui/SpreadAnimLayout$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/ui/SpreadAnimLayout;->onWindowVisibilityChanged(I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/ui/SpreadAnimLayout;


# direct methods
.method constructor <init>(Lcom/tkay/basead/ui/SpreadAnimLayout;)V
    .locals 0

    .line 110
    iput-object p1, p0, Lcom/tkay/basead/ui/SpreadAnimLayout$1;->a:Lcom/tkay/basead/ui/SpreadAnimLayout;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 1

    .line 113
    iget-object v0, p0, Lcom/tkay/basead/ui/SpreadAnimLayout$1;->a:Lcom/tkay/basead/ui/SpreadAnimLayout;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/SpreadAnimLayout;->startSpreadAnimation()V

    return-void
.end method
