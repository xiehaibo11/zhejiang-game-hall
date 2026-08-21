.class final Lcom/tkay/china/a/b$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/china/a/b;->a(Landroid/content/Context;Ljava/lang/String;Lcom/tkay/china/a/a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/china/a/a;

.field final synthetic b:Landroid/content/Context;

.field final synthetic c:Ljava/lang/String;


# direct methods
.method constructor <init>(Lcom/tkay/china/a/a;Landroid/content/Context;Ljava/lang/String;)V
    .locals 0

    .line 109
    iput-object p1, p0, Lcom/tkay/china/a/b$1;->a:Lcom/tkay/china/a/a;

    iput-object p2, p0, Lcom/tkay/china/a/b$1;->b:Landroid/content/Context;

    iput-object p3, p0, Lcom/tkay/china/a/b$1;->c:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    .line 111
    new-instance v0, Lcom/tkay/china/a/b$1$1;

    invoke-direct {v0, p0}, Lcom/tkay/china/a/b$1$1;-><init>(Lcom/tkay/china/a/b$1;)V

    .line 126
    :try_start_0
    iget-object v1, p0, Lcom/tkay/china/a/b$1;->c:Ljava/lang/String;

    const/4 v2, -0x1

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v3

    sparse-switch v3, :sswitch_data_0

    goto/16 :goto_0

    :sswitch_0
    const-string v3, "HUAWEI"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    const/4 v2, 0x6

    goto/16 :goto_0

    :sswitch_1
    const-string v3, "FERRMEOS"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    const/4 v2, 0x4

    goto :goto_0

    :sswitch_2
    const-string v3, "MOTOLORA"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    const/16 v2, 0x9

    goto :goto_0

    :sswitch_3
    const-string v3, "MEIZU"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    const/16 v2, 0xa

    goto :goto_0

    :sswitch_4
    const-string v3, "SSUI"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    const/4 v2, 0x5

    goto :goto_0

    :sswitch_5
    const-string v3, "OPPO"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    const/4 v2, 0x1

    goto :goto_0

    :sswitch_6
    const-string v3, "ASUS"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    const/4 v2, 0x0

    goto :goto_0

    :sswitch_7
    const-string v3, "ZTE"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    const/4 v2, 0x3

    goto :goto_0

    :sswitch_8
    const-string v3, "ONEPLUS"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    const/4 v2, 0x2

    goto :goto_0

    :sswitch_9
    const-string v3, "SAMSUNG"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    const/4 v2, 0x7

    goto :goto_0

    :sswitch_a
    const-string v3, "LENOVO"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    const/16 v2, 0x8

    :cond_0
    :goto_0
    packed-switch v2, :pswitch_data_0

    .line 157
    iget-object v0, p0, Lcom/tkay/china/a/b$1;->b:Landroid/content/Context;

    goto :goto_1

    .line 154
    :pswitch_0
    new-instance v1, Lcom/tkay/china/a/a/e;

    iget-object v2, p0, Lcom/tkay/china/a/b$1;->b:Landroid/content/Context;

    invoke-direct {v1, v2}, Lcom/tkay/china/a/a/e;-><init>(Landroid/content/Context;)V

    invoke-virtual {v1, v0}, Lcom/tkay/china/a/a/e;->a(Lcom/tkay/china/a/a;)V

    return-void

    .line 150
    :pswitch_1
    new-instance v1, Lcom/tkay/china/a/a/m;

    iget-object v2, p0, Lcom/tkay/china/a/b$1;->b:Landroid/content/Context;

    invoke-direct {v1, v2}, Lcom/tkay/china/a/a/m;-><init>(Landroid/content/Context;)V

    invoke-virtual {v1, v0}, Lcom/tkay/china/a/a/m;->a(Lcom/tkay/china/a/a;)V

    return-void

    .line 145
    :pswitch_2
    new-instance v1, Lcom/tkay/china/a/a/j;

    iget-object v2, p0, Lcom/tkay/china/a/b$1;->b:Landroid/content/Context;

    invoke-direct {v1, v2}, Lcom/tkay/china/a/a/j;-><init>(Landroid/content/Context;)V

    invoke-virtual {v1, v0}, Lcom/tkay/china/a/a/j;->a(Lcom/tkay/china/a/a;)V

    return-void

    .line 142
    :pswitch_3
    new-instance v1, Lcom/tkay/china/a/a/d;

    iget-object v2, p0, Lcom/tkay/china/a/b$1;->b:Landroid/content/Context;

    invoke-direct {v1, v2}, Lcom/tkay/china/a/a/d;-><init>(Landroid/content/Context;)V

    invoke-virtual {v1, v0}, Lcom/tkay/china/a/a/d;->a(Lcom/tkay/china/a/a;)V

    return-void

    .line 138
    :pswitch_4
    iget-object v0, p0, Lcom/tkay/china/a/b$1;->b:Landroid/content/Context;

    iget-object v1, p0, Lcom/tkay/china/a/b$1;->a:Lcom/tkay/china/a/a;

    invoke-static {v0, v1}, Lcom/tkay/china/a/b;->b(Landroid/content/Context;Lcom/tkay/china/a/a;)V

    return-void

    .line 132
    :pswitch_5
    new-instance v1, Lcom/tkay/china/a/a/g;

    iget-object v2, p0, Lcom/tkay/china/a/b$1;->b:Landroid/content/Context;

    invoke-direct {v1, v2}, Lcom/tkay/china/a/a/g;-><init>(Landroid/content/Context;)V

    invoke-virtual {v1, v0}, Lcom/tkay/china/a/a/g;->a(Lcom/tkay/china/a/a;)Ljava/lang/String;

    return-void

    .line 128
    :pswitch_6
    new-instance v1, Lcom/tkay/china/a/a/b;

    iget-object v2, p0, Lcom/tkay/china/a/b$1;->b:Landroid/content/Context;

    invoke-direct {v1, v2}, Lcom/tkay/china/a/a/b;-><init>(Landroid/content/Context;)V

    invoke-virtual {v1, v0}, Lcom/tkay/china/a/a/b;->a(Lcom/tkay/china/a/a;)V

    return-void

    .line 157
    :goto_1
    iget-object v1, p0, Lcom/tkay/china/a/b$1;->a:Lcom/tkay/china/a/a;

    invoke-static {v0, v1}, Lcom/tkay/china/a/b;->b(Landroid/content/Context;Lcom/tkay/china/a/a;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    .line 161
    iget-object v1, p0, Lcom/tkay/china/a/b$1;->a:Lcom/tkay/china/a/a;

    if-eqz v1, :cond_1

    .line 162
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    invoke-interface {v1}, Lcom/tkay/china/a/a;->a()V

    :cond_1
    return-void

    :sswitch_data_0
    .sparse-switch
        -0x7a5eb2cd -> :sswitch_a
        -0x660bb426 -> :sswitch_9
        -0x23e7db20 -> :sswitch_8
        0x15c4b -> :sswitch_7
        0x1ece50 -> :sswitch_6
        0x251fa0 -> :sswitch_5
        0x26fcf4 -> :sswitch_4
        0x45d8cac -> :sswitch_3
        0x259adc0f -> :sswitch_2
        0x3a35353b -> :sswitch_1
        0x7fa995e7 -> :sswitch_0
    .end sparse-switch

    :pswitch_data_0
    .packed-switch 0x0
        :pswitch_6
        :pswitch_5
        :pswitch_5
        :pswitch_4
        :pswitch_4
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method
