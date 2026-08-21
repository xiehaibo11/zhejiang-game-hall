.class Lcom/sigmob/sdk/nativead/a$1;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/text/TextWatcher;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/nativead/a;->onCreate(Landroid/os/Bundle;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/nativead/a;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/nativead/a;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/a$1;->a:Lcom/sigmob/sdk/nativead/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public afterTextChanged(Landroid/text/Editable;)V
    .locals 1

    invoke-virtual {p1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/a$1;->a:Lcom/sigmob/sdk/nativead/a;

    invoke-static {p1}, Lcom/sigmob/sdk/nativead/a;->a(Lcom/sigmob/sdk/nativead/a;)Landroid/widget/TextView;

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/a$1;->a:Lcom/sigmob/sdk/nativead/a;

    invoke-static {p1}, Lcom/sigmob/sdk/nativead/a;->a(Lcom/sigmob/sdk/nativead/a;)Landroid/widget/TextView;

    move-result-object p1

    const-string v0, "#C2C2C2"

    invoke-static {v0}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setTextColor(I)V

    :cond_0
    return-void
.end method

.method public beforeTextChanged(Ljava/lang/CharSequence;III)V
    .locals 0

    return-void
.end method

.method public onTextChanged(Ljava/lang/CharSequence;III)V
    .locals 0

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/a$1;->a:Lcom/sigmob/sdk/nativead/a;

    invoke-static {p1}, Lcom/sigmob/sdk/nativead/a;->a(Lcom/sigmob/sdk/nativead/a;)Landroid/widget/TextView;

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/a$1;->a:Lcom/sigmob/sdk/nativead/a;

    invoke-static {p1}, Lcom/sigmob/sdk/nativead/a;->a(Lcom/sigmob/sdk/nativead/a;)Landroid/widget/TextView;

    move-result-object p1

    const-string p2, "#FE7E03"

    invoke-static {p2}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result p2

    invoke-virtual {p1, p2}, Landroid/widget/TextView;->setTextColor(I)V

    :cond_0
    return-void
.end method
