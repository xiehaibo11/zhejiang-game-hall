.class final Lcom/tkay/basead/mraid/c$1;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/mraid/c;->a()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/mraid/c;


# direct methods
.method constructor <init>(Lcom/tkay/basead/mraid/c;)V
    .locals 0

    .line 85
    iput-object p1, p0, Lcom/tkay/basead/mraid/c$1;->a:Lcom/tkay/basead/mraid/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 0

    .line 88
    iget-object p1, p0, Lcom/tkay/basead/mraid/c$1;->a:Lcom/tkay/basead/mraid/c;

    invoke-virtual {p1}, Lcom/tkay/basead/mraid/c;->dismiss()V

    return-void
.end method
