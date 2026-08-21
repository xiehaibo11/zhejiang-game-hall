.class public final Lcom/vivo/push/d/ag;
.super Ljava/lang/Object;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a(Lcom/vivo/push/o;)Lcom/vivo/push/l;
    .locals 2

    invoke-virtual {p0}, Lcom/vivo/push/o;->b()I

    move-result v0

    const/16 v1, 0x14

    if-eq v0, v1, :cond_2

    const/16 v1, 0x64

    if-eq v0, v1, :cond_1

    const/16 v1, 0x65

    if-eq v0, v1, :cond_0

    packed-switch v0, :pswitch_data_0

    packed-switch v0, :pswitch_data_1

    const/4 p0, 0x0

    goto/16 :goto_1

    :pswitch_0
    new-instance v0, Lcom/vivo/push/d/ai;

    invoke-direct {v0, p0}, Lcom/vivo/push/d/ai;-><init>(Lcom/vivo/push/o;)V

    goto :goto_0

    :pswitch_1
    new-instance v0, Lcom/vivo/push/d/a;

    invoke-direct {v0, p0}, Lcom/vivo/push/d/a;-><init>(Lcom/vivo/push/o;)V

    goto :goto_0

    :pswitch_2
    new-instance v0, Lcom/vivo/push/d/f;

    invoke-direct {v0, p0}, Lcom/vivo/push/d/f;-><init>(Lcom/vivo/push/o;)V

    goto :goto_0

    :pswitch_3
    new-instance v0, Lcom/vivo/push/d/ad;

    invoke-direct {v0, p0}, Lcom/vivo/push/d/ad;-><init>(Lcom/vivo/push/o;)V

    goto :goto_0

    :pswitch_4
    new-instance v0, Lcom/vivo/push/d/d;

    invoke-direct {v0, p0}, Lcom/vivo/push/d/d;-><init>(Lcom/vivo/push/o;)V

    goto :goto_0

    :pswitch_5
    new-instance v0, Lcom/vivo/push/d/g;

    invoke-direct {v0, p0}, Lcom/vivo/push/d/g;-><init>(Lcom/vivo/push/o;)V

    goto :goto_0

    :pswitch_6
    new-instance v0, Lcom/vivo/push/d/l;

    invoke-direct {v0, p0}, Lcom/vivo/push/d/l;-><init>(Lcom/vivo/push/o;)V

    goto :goto_0

    :pswitch_7
    new-instance v0, Lcom/vivo/push/d/n;

    invoke-direct {v0, p0}, Lcom/vivo/push/d/n;-><init>(Lcom/vivo/push/o;)V

    goto :goto_0

    :pswitch_8
    new-instance v0, Lcom/vivo/push/d/x;

    invoke-direct {v0, p0}, Lcom/vivo/push/d/x;-><init>(Lcom/vivo/push/o;)V

    goto :goto_0

    :pswitch_9
    new-instance v0, Lcom/vivo/push/d/u;

    invoke-direct {v0, p0}, Lcom/vivo/push/d/u;-><init>(Lcom/vivo/push/o;)V

    goto :goto_0

    :pswitch_a
    new-instance v0, Lcom/vivo/push/d/r;

    invoke-direct {v0, p0}, Lcom/vivo/push/d/r;-><init>(Lcom/vivo/push/o;)V

    goto :goto_0

    :pswitch_b
    new-instance v0, Lcom/vivo/push/d/p;

    invoke-direct {v0, p0}, Lcom/vivo/push/d/p;-><init>(Lcom/vivo/push/o;)V

    goto :goto_0

    :pswitch_c
    new-instance v0, Lcom/vivo/push/d/h;

    invoke-direct {v0, p0}, Lcom/vivo/push/d/h;-><init>(Lcom/vivo/push/o;)V

    goto :goto_0

    :pswitch_d
    new-instance v0, Lcom/vivo/push/d/aa;

    invoke-direct {v0, p0}, Lcom/vivo/push/d/aa;-><init>(Lcom/vivo/push/o;)V

    goto :goto_0

    :pswitch_e
    new-instance v0, Lcom/vivo/push/d/ah;

    invoke-direct {v0, p0}, Lcom/vivo/push/d/ah;-><init>(Lcom/vivo/push/o;)V

    :goto_0
    move-object p0, v0

    goto :goto_1

    :cond_0
    new-instance v0, Lcom/vivo/push/d/c;

    invoke-direct {v0, p0}, Lcom/vivo/push/d/c;-><init>(Lcom/vivo/push/o;)V

    goto :goto_0

    :cond_1
    new-instance v0, Lcom/vivo/push/d/b;

    invoke-direct {v0, p0}, Lcom/vivo/push/d/b;-><init>(Lcom/vivo/push/o;)V

    goto :goto_0

    :cond_2
    new-instance v0, Lcom/vivo/push/d/af;

    invoke-direct {v0, p0}, Lcom/vivo/push/d/af;-><init>(Lcom/vivo/push/o;)V

    goto :goto_0

    :goto_1
    return-object p0

    nop

    :pswitch_data_0
    .packed-switch 0x0
        :pswitch_e
        :pswitch_d
        :pswitch_c
        :pswitch_b
        :pswitch_a
        :pswitch_9
        :pswitch_8
        :pswitch_7
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
    .end packed-switch

    :pswitch_data_1
    .packed-switch 0x7d0
        :pswitch_e
        :pswitch_e
        :pswitch_e
        :pswitch_e
        :pswitch_e
        :pswitch_e
        :pswitch_1
        :pswitch_0
        :pswitch_e
        :pswitch_e
        :pswitch_e
        :pswitch_e
        :pswitch_e
        :pswitch_e
        :pswitch_e
        :pswitch_e
    .end packed-switch
.end method

.method public static b(Lcom/vivo/push/o;)Lcom/vivo/push/d/z;
    .locals 2

    invoke-virtual {p0}, Lcom/vivo/push/o;->b()I

    move-result v0

    const/16 v1, 0x14

    if-eq v0, v1, :cond_1

    const/16 v1, 0x7e0

    if-eq v0, v1, :cond_0

    packed-switch v0, :pswitch_data_0

    const/4 p0, 0x0

    goto :goto_1

    :pswitch_0
    new-instance v0, Lcom/vivo/push/d/ad;

    invoke-direct {v0, p0}, Lcom/vivo/push/d/ad;-><init>(Lcom/vivo/push/o;)V

    goto :goto_0

    :pswitch_1
    new-instance v0, Lcom/vivo/push/d/d;

    invoke-direct {v0, p0}, Lcom/vivo/push/d/d;-><init>(Lcom/vivo/push/o;)V

    goto :goto_0

    :pswitch_2
    new-instance v0, Lcom/vivo/push/d/g;

    invoke-direct {v0, p0}, Lcom/vivo/push/d/g;-><init>(Lcom/vivo/push/o;)V

    goto :goto_0

    :pswitch_3
    new-instance v0, Lcom/vivo/push/d/l;

    invoke-direct {v0, p0}, Lcom/vivo/push/d/l;-><init>(Lcom/vivo/push/o;)V

    goto :goto_0

    :pswitch_4
    new-instance v0, Lcom/vivo/push/d/n;

    invoke-direct {v0, p0}, Lcom/vivo/push/d/n;-><init>(Lcom/vivo/push/o;)V

    goto :goto_0

    :pswitch_5
    new-instance v0, Lcom/vivo/push/d/x;

    invoke-direct {v0, p0}, Lcom/vivo/push/d/x;-><init>(Lcom/vivo/push/o;)V

    goto :goto_0

    :pswitch_6
    new-instance v0, Lcom/vivo/push/d/u;

    invoke-direct {v0, p0}, Lcom/vivo/push/d/u;-><init>(Lcom/vivo/push/o;)V

    goto :goto_0

    :pswitch_7
    new-instance v0, Lcom/vivo/push/d/r;

    invoke-direct {v0, p0}, Lcom/vivo/push/d/r;-><init>(Lcom/vivo/push/o;)V

    goto :goto_0

    :pswitch_8
    new-instance v0, Lcom/vivo/push/d/p;

    invoke-direct {v0, p0}, Lcom/vivo/push/d/p;-><init>(Lcom/vivo/push/o;)V

    goto :goto_0

    :pswitch_9
    new-instance v0, Lcom/vivo/push/d/h;

    invoke-direct {v0, p0}, Lcom/vivo/push/d/h;-><init>(Lcom/vivo/push/o;)V

    goto :goto_0

    :pswitch_a
    new-instance v0, Lcom/vivo/push/d/aa;

    invoke-direct {v0, p0}, Lcom/vivo/push/d/aa;-><init>(Lcom/vivo/push/o;)V

    :goto_0
    move-object p0, v0

    goto :goto_1

    :cond_0
    new-instance v0, Lcom/vivo/push/d/k;

    invoke-direct {v0, p0}, Lcom/vivo/push/d/k;-><init>(Lcom/vivo/push/o;)V

    goto :goto_0

    :cond_1
    new-instance v0, Lcom/vivo/push/d/af;

    invoke-direct {v0, p0}, Lcom/vivo/push/d/af;-><init>(Lcom/vivo/push/o;)V

    goto :goto_0

    :goto_1
    return-object p0

    nop

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_a
        :pswitch_9
        :pswitch_8
        :pswitch_7
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method
