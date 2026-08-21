.class final Lcom/tkay/core/b/b$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/b/f$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/b/b;->a(Lcom/tkay/core/b/b/a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/b/b;


# direct methods
.method constructor <init>(Lcom/tkay/core/b/b;)V
    .locals 0

    .line 172
    iput-object p1, p0, Lcom/tkay/core/b/b$2;->a:Lcom/tkay/core/b/b;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/tkay/core/common/f/aj;Lcom/tkay/core/api/TYBaseAdAdapter;)V
    .locals 1

    .line 175
    iget-object v0, p0, Lcom/tkay/core/b/b$2;->a:Lcom/tkay/core/b/b;

    iget-object v0, v0, Lcom/tkay/core/b/b;->l:Lcom/tkay/core/b/b/a;

    if-eqz v0, :cond_0

    .line 176
    iget-object v0, p0, Lcom/tkay/core/b/b$2;->a:Lcom/tkay/core/b/b;

    iget-object v0, v0, Lcom/tkay/core/b/b;->l:Lcom/tkay/core/b/b/a;

    invoke-interface {v0, p1, p2}, Lcom/tkay/core/b/b/a;->a(Lcom/tkay/core/common/f/aj;Lcom/tkay/core/api/TYBaseAdAdapter;)V

    :cond_0
    return-void
.end method

.method public final a(Lcom/tkay/core/common/f/aj;Lorg/json/JSONObject;)V
    .locals 2

    .line 182
    iget-object v0, p0, Lcom/tkay/core/b/b$2;->a:Lcom/tkay/core/b/b;

    iget-object v0, v0, Lcom/tkay/core/b/b;->c:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 186
    :cond_0
    iget-object v0, p0, Lcom/tkay/core/b/b$2;->a:Lcom/tkay/core/b/b;

    iget-object v0, v0, Lcom/tkay/core/b/b;->t:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 187
    iget-object v0, p0, Lcom/tkay/core/b/b$2;->a:Lcom/tkay/core/b/b;

    invoke-static {v0, p1}, Lcom/tkay/core/b/b;->a(Lcom/tkay/core/b/b;Lcom/tkay/core/common/f/aj;)V

    .line 189
    iget-object v0, p0, Lcom/tkay/core/b/b$2;->a:Lcom/tkay/core/b/b;

    invoke-static {v0, p2, p1}, Lcom/tkay/core/b/b;->a(Lcom/tkay/core/b/b;Lorg/json/JSONObject;Lcom/tkay/core/common/f/aj;)V

    return-void
.end method

.method public final a(Ljava/lang/String;Lcom/tkay/core/common/f/aj;)V
    .locals 7

    .line 194
    iget-object v0, p0, Lcom/tkay/core/b/b$2;->a:Lcom/tkay/core/b/b;

    iget-object v0, v0, Lcom/tkay/core/b/b;->c:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    if-nez p1, :cond_1

    const-string p1, ""

    .line 202
    :cond_1
    iget-object v0, p0, Lcom/tkay/core/b/b$2;->a:Lcom/tkay/core/b/b;

    iget-object v0, v0, Lcom/tkay/core/b/b;->t:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p2}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 203
    iget-object v0, p0, Lcom/tkay/core/b/b$2;->a:Lcom/tkay/core/b/b;

    iget-object v0, v0, Lcom/tkay/core/b/b;->r:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p2}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 205
    iget-object v0, p0, Lcom/tkay/core/b/b$2;->a:Lcom/tkay/core/b/b;

    invoke-static {v0, p1, p2}, Lcom/tkay/core/b/b;->a(Lcom/tkay/core/b/b;Ljava/lang/String;Lcom/tkay/core/common/f/aj;)V

    const/4 v0, -0x1

    .line 207
    invoke-virtual {p1}, Ljava/lang/String;->hashCode()I

    move-result v1

    const/4 v2, 0x5

    const/4 v3, 0x4

    const/4 v4, 0x3

    const/4 v5, 0x2

    const/4 v6, 0x1

    sparse-switch v1, :sswitch_data_0

    goto :goto_0

    :sswitch_0
    const-string v1, "There is no Network Adapter."

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    const/4 v0, 0x0

    goto :goto_0

    :sswitch_1
    const-string v1, "The parameter is abnormal."

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    move v0, v4

    goto :goto_0

    :sswitch_2
    const-string v1, "This network don\'t support header bidding in current TY\'s version."

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    move v0, v6

    goto :goto_0

    :sswitch_3
    const-string v1, "Network init error."

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    move v0, v5

    goto :goto_0

    :sswitch_4
    const-string v1, "Network BidToken or Custom bid info is Empty."

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    move v0, v3

    goto :goto_0

    :sswitch_5
    const-string v1, "Request Token or Custom bid info Timeout."

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    move v0, v2

    :cond_2
    :goto_0
    const/16 v1, -0x9

    if-eqz v0, :cond_4

    if-eq v0, v6, :cond_4

    if-eq v0, v5, :cond_4

    if-eq v0, v4, :cond_4

    if-eq v0, v3, :cond_3

    if-eq v0, v2, :cond_3

    .line 219
    iget-object v0, p0, Lcom/tkay/core/b/b$2;->a:Lcom/tkay/core/b/b;

    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    const-string v2, "Unknown error: "

    invoke-virtual {v2, p1}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p2, p1, v1}, Lcom/tkay/core/b/b;->a(Lcom/tkay/core/b/b;Lcom/tkay/core/common/f/aj;Ljava/lang/String;I)V

    goto :goto_1

    .line 216
    :cond_3
    iget-object v0, p0, Lcom/tkay/core/b/b$2;->a:Lcom/tkay/core/b/b;

    const/4 v1, -0x2

    invoke-static {v0, p2, p1, v1}, Lcom/tkay/core/b/b;->a(Lcom/tkay/core/b/b;Lcom/tkay/core/common/f/aj;Ljava/lang/String;I)V

    goto :goto_1

    .line 212
    :cond_4
    iget-object v0, p0, Lcom/tkay/core/b/b$2;->a:Lcom/tkay/core/b/b;

    invoke-static {v0, p2, p1, v1}, Lcom/tkay/core/b/b;->a(Lcom/tkay/core/b/b;Lcom/tkay/core/common/f/aj;Ljava/lang/String;I)V

    .line 224
    :goto_1
    iget-object p1, p0, Lcom/tkay/core/b/b$2;->a:Lcom/tkay/core/b/b;

    const/4 p2, 0x0

    invoke-static {p1, p2, p2}, Lcom/tkay/core/b/b;->a(Lcom/tkay/core/b/b;Lorg/json/JSONObject;Lcom/tkay/core/common/f/aj;)V

    return-void

    :sswitch_data_0
    .sparse-switch
        -0x2fad20e -> :sswitch_5
        0x36593cc -> :sswitch_4
        0xc309924 -> :sswitch_3
        0x14256c26 -> :sswitch_2
        0x4e7f8d36 -> :sswitch_1
        0x749dca96 -> :sswitch_0
    .end sparse-switch
.end method
