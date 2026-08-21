.class public Lcom/xiaomi/push/ji;
.super Ljava/lang/Object;


# static fields
.field private static a:I = 0x7fffffff


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public static a(Lcom/xiaomi/push/jf;B)V
    .locals 1

    sget v0, Lcom/xiaomi/push/ji;->a:I

    invoke-static {p0, p1, v0}, Lcom/xiaomi/push/ji;->a(Lcom/xiaomi/push/jf;BI)V

    return-void
.end method

.method public static a(Lcom/xiaomi/push/jf;BI)V
    .locals 3

    if-lez p2, :cond_4

    const/4 v0, 0x0

    packed-switch p1, :pswitch_data_0

    :pswitch_0
    goto/16 :goto_4

    :pswitch_1
    invoke-virtual {p0}, Lcom/xiaomi/push/jf;->a()Lcom/xiaomi/push/jd;

    move-result-object p1

    :goto_0
    iget v1, p1, Lcom/xiaomi/push/jd;->a:I

    if-ge v0, v1, :cond_0

    iget-byte v1, p1, Lcom/xiaomi/push/jd;->a:B

    add-int/lit8 v2, p2, -0x1

    invoke-static {p0, v1, v2}, Lcom/xiaomi/push/ji;->a(Lcom/xiaomi/push/jf;BI)V

    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_0
    invoke-virtual {p0}, Lcom/xiaomi/push/jf;->i()V

    goto/16 :goto_4

    :pswitch_2
    invoke-virtual {p0}, Lcom/xiaomi/push/jf;->a()Lcom/xiaomi/push/jj;

    move-result-object p1

    :goto_1
    iget v1, p1, Lcom/xiaomi/push/jj;->a:I

    if-ge v0, v1, :cond_1

    iget-byte v1, p1, Lcom/xiaomi/push/jj;->a:B

    add-int/lit8 v2, p2, -0x1

    invoke-static {p0, v1, v2}, Lcom/xiaomi/push/ji;->a(Lcom/xiaomi/push/jf;BI)V

    add-int/lit8 v0, v0, 0x1

    goto :goto_1

    :cond_1
    invoke-virtual {p0}, Lcom/xiaomi/push/jf;->j()V

    goto :goto_4

    :pswitch_3
    invoke-virtual {p0}, Lcom/xiaomi/push/jf;->a()Lcom/xiaomi/push/je;

    move-result-object p1

    :goto_2
    iget v1, p1, Lcom/xiaomi/push/je;->a:I

    if-ge v0, v1, :cond_2

    iget-byte v1, p1, Lcom/xiaomi/push/je;->a:B

    add-int/lit8 v2, p2, -0x1

    invoke-static {p0, v1, v2}, Lcom/xiaomi/push/ji;->a(Lcom/xiaomi/push/jf;BI)V

    iget-byte v1, p1, Lcom/xiaomi/push/je;->b:B

    invoke-static {p0, v1, v2}, Lcom/xiaomi/push/ji;->a(Lcom/xiaomi/push/jf;BI)V

    add-int/lit8 v0, v0, 0x1

    goto :goto_2

    :cond_2
    invoke-virtual {p0}, Lcom/xiaomi/push/jf;->h()V

    goto :goto_4

    :pswitch_4
    invoke-virtual {p0}, Lcom/xiaomi/push/jf;->a()Lcom/xiaomi/push/jk;

    :goto_3
    invoke-virtual {p0}, Lcom/xiaomi/push/jf;->a()Lcom/xiaomi/push/jc;

    move-result-object p1

    iget-byte v0, p1, Lcom/xiaomi/push/jc;->a:B

    if-nez v0, :cond_3

    invoke-virtual {p0}, Lcom/xiaomi/push/jf;->f()V

    goto :goto_4

    :cond_3
    iget-byte p1, p1, Lcom/xiaomi/push/jc;->a:B

    add-int/lit8 v0, p2, -0x1

    invoke-static {p0, p1, v0}, Lcom/xiaomi/push/ji;->a(Lcom/xiaomi/push/jf;BI)V

    invoke-virtual {p0}, Lcom/xiaomi/push/jf;->g()V

    goto :goto_3

    :pswitch_5
    invoke-virtual {p0}, Lcom/xiaomi/push/jf;->a()Ljava/nio/ByteBuffer;

    goto :goto_4

    :pswitch_6
    invoke-virtual {p0}, Lcom/xiaomi/push/jf;->a()J

    goto :goto_4

    :pswitch_7
    invoke-virtual {p0}, Lcom/xiaomi/push/jf;->a()I

    goto :goto_4

    :pswitch_8
    invoke-virtual {p0}, Lcom/xiaomi/push/jf;->a()S

    goto :goto_4

    :pswitch_9
    invoke-virtual {p0}, Lcom/xiaomi/push/jf;->a()D

    goto :goto_4

    :pswitch_a
    invoke-virtual {p0}, Lcom/xiaomi/push/jf;->a()B

    goto :goto_4

    :pswitch_b
    invoke-virtual {p0}, Lcom/xiaomi/push/jf;->a()Z

    :goto_4
    return-void

    :cond_4
    new-instance p0, Lcom/xiaomi/push/iz;

    const-string p1, "Maximum skip depth exceeded"

    invoke-direct {p0, p1}, Lcom/xiaomi/push/iz;-><init>(Ljava/lang/String;)V

    throw p0

    :pswitch_data_0
    .packed-switch 0x2
        :pswitch_b
        :pswitch_a
        :pswitch_9
        :pswitch_0
        :pswitch_8
        :pswitch_0
        :pswitch_7
        :pswitch_0
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
    .end packed-switch
.end method
