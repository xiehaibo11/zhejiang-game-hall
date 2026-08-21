.class final Lcom/tkay/expressad/reward/a/c$g;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/videocommon/b/g$d;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/reward/a/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "g"
.end annotation


# static fields
.field public static final a:I = 0x1f1

.field public static final b:I = 0x35b

.field public static final c:I = 0x139

.field public static final d:I = 0x1f6


# instance fields
.field private e:Z

.field private f:Landroid/content/Context;

.field private g:Ljava/lang/String;

.field private h:Ljava/lang/String;

.field private i:Ljava/lang/String;

.field private j:Lcom/tkay/expressad/foundation/d/c;

.field private k:I

.field private l:Landroid/os/Handler;

.field private m:Lcom/tkay/expressad/reward/a/c$i;

.field private n:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;"
        }
    .end annotation
.end field

.field private o:J


# direct methods
.method public constructor <init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;ILandroid/os/Handler;Lcom/tkay/expressad/reward/a/c$i;Ljava/util/List;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Lcom/tkay/expressad/foundation/d/c;",
            "I",
            "Landroid/os/Handler;",
            "Lcom/tkay/expressad/reward/a/c$i;",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;)V"
        }
    .end annotation

    .line 575
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 563
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/a/c$g;->e:Z

    .line 576
    iput-object p1, p0, Lcom/tkay/expressad/reward/a/c$g;->f:Landroid/content/Context;

    .line 577
    iput-object p2, p0, Lcom/tkay/expressad/reward/a/c$g;->h:Ljava/lang/String;

    .line 578
    iput-object p3, p0, Lcom/tkay/expressad/reward/a/c$g;->g:Ljava/lang/String;

    .line 579
    iput-object p4, p0, Lcom/tkay/expressad/reward/a/c$g;->i:Ljava/lang/String;

    .line 580
    iput-object p5, p0, Lcom/tkay/expressad/reward/a/c$g;->j:Lcom/tkay/expressad/foundation/d/c;

    .line 581
    iput p6, p0, Lcom/tkay/expressad/reward/a/c$g;->k:I

    .line 582
    iput-object p7, p0, Lcom/tkay/expressad/reward/a/c$g;->l:Landroid/os/Handler;

    .line 583
    iput-object p8, p0, Lcom/tkay/expressad/reward/a/c$g;->m:Lcom/tkay/expressad/reward/a/c$i;

    .line 584
    iput-object p9, p0, Lcom/tkay/expressad/reward/a/c$g;->n:Ljava/util/List;

    .line 585
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p1

    iput-wide p1, p0, Lcom/tkay/expressad/reward/a/c$g;->o:J

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;)V
    .locals 6

    .line 594
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/j;->a()Lcom/tkay/expressad/videocommon/b/j;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, p1, v1}, Lcom/tkay/expressad/videocommon/b/j;->b(Ljava/lang/String;Z)V

    .line 595
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    .line 597
    iget v0, p0, Lcom/tkay/expressad/reward/a/c$g;->k:I

    const/16 v1, 0x139

    const-string v2, "url"

    const/16 v3, 0x65

    const-string v4, "request_id"

    const-string v5, "unit_id"

    if-eq v0, v1, :cond_3

    const/16 v1, 0x1f1

    if-eq v0, v1, :cond_1

    const/16 p1, 0x35b

    if-eq v0, p1, :cond_0

    goto :goto_0

    .line 647
    :cond_0
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object p1

    const/16 v0, 0x67

    .line 648
    iput v0, p1, Landroid/os/Message;->what:I

    .line 649
    new-instance v0, Landroid/os/Bundle;

    invoke-direct {v0}, Landroid/os/Bundle;-><init>()V

    .line 650
    iget-object v1, p0, Lcom/tkay/expressad/reward/a/c$g;->g:Ljava/lang/String;

    invoke-virtual {v0, v5, v1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 651
    sget-object v1, Lcom/tkay/expressad/b;->y:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/expressad/reward/a/c$g;->h:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 652
    iget-object v1, p0, Lcom/tkay/expressad/reward/a/c$g;->i:Ljava/lang/String;

    invoke-virtual {v0, v4, v1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 653
    invoke-virtual {p1, v0}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    .line 654
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/c$g;->l:Landroid/os/Handler;

    invoke-virtual {v0, p1}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 656
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/c$g;->m:Lcom/tkay/expressad/reward/a/c$i;

    if-eqz p1, :cond_2

    .line 657
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/c$g;->h:Ljava/lang/String;

    iget-object v1, p0, Lcom/tkay/expressad/reward/a/c$g;->g:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/expressad/reward/a/c$g;->i:Ljava/lang/String;

    invoke-interface {p1, v0, v1, v2}, Lcom/tkay/expressad/reward/a/c$i;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 600
    :cond_1
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    .line 601
    iput v3, v0, Landroid/os/Message;->what:I

    .line 602
    new-instance v1, Landroid/os/Bundle;

    invoke-direct {v1}, Landroid/os/Bundle;-><init>()V

    .line 603
    iget-object v3, p0, Lcom/tkay/expressad/reward/a/c$g;->g:Ljava/lang/String;

    invoke-virtual {v1, v5, v3}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 604
    sget-object v3, Lcom/tkay/expressad/b;->y:Ljava/lang/String;

    iget-object v5, p0, Lcom/tkay/expressad/reward/a/c$g;->h:Ljava/lang/String;

    invoke-virtual {v1, v3, v5}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 605
    iget-object v3, p0, Lcom/tkay/expressad/reward/a/c$g;->i:Ljava/lang/String;

    invoke-virtual {v1, v4, v3}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 606
    invoke-virtual {v1, v2, p1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 607
    invoke-virtual {v0, v1}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    .line 608
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/c$g;->l:Landroid/os/Handler;

    invoke-virtual {p1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 610
    iget-boolean p1, p0, Lcom/tkay/expressad/reward/a/c$g;->e:Z

    if-eqz p1, :cond_2

    :cond_2
    :goto_0
    return-void

    .line 634
    :cond_3
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    .line 635
    iput v3, v0, Landroid/os/Message;->what:I

    .line 636
    new-instance v1, Landroid/os/Bundle;

    invoke-direct {v1}, Landroid/os/Bundle;-><init>()V

    .line 637
    iget-object v3, p0, Lcom/tkay/expressad/reward/a/c$g;->g:Ljava/lang/String;

    invoke-virtual {v1, v5, v3}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 638
    sget-object v3, Lcom/tkay/expressad/b;->y:Ljava/lang/String;

    iget-object v5, p0, Lcom/tkay/expressad/reward/a/c$g;->h:Ljava/lang/String;

    invoke-virtual {v1, v3, v5}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 639
    iget-object v3, p0, Lcom/tkay/expressad/reward/a/c$g;->i:Ljava/lang/String;

    invoke-virtual {v1, v4, v3}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 640
    invoke-virtual {v1, v2, p1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 641
    invoke-virtual {v0, v1}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    .line 642
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/c$g;->l:Landroid/os/Handler;

    invoke-virtual {p1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 7

    .line 688
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/j;->a()Lcom/tkay/expressad/videocommon/b/j;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, p2, v1}, Lcom/tkay/expressad/videocommon/b/j;->b(Ljava/lang/String;Z)V

    .line 689
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    .line 692
    iget v0, p0, Lcom/tkay/expressad/reward/a/c$g;->k:I

    const/16 v1, 0x139

    const-string v2, "message"

    const-string v3, "url"

    const-string v4, "request_id"

    const-string v5, "unit_id"

    if-eq v0, v1, :cond_3

    const/16 v1, 0x1f1

    if-eq v0, v1, :cond_1

    const/16 v1, 0x35b

    if-eq v0, v1, :cond_0

    goto :goto_0

    .line 767
    :cond_0
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    const/16 v1, 0xcb

    .line 768
    iput v1, v0, Landroid/os/Message;->what:I

    .line 769
    new-instance v1, Landroid/os/Bundle;

    invoke-direct {v1}, Landroid/os/Bundle;-><init>()V

    .line 770
    iget-object v6, p0, Lcom/tkay/expressad/reward/a/c$g;->g:Ljava/lang/String;

    invoke-virtual {v1, v5, v6}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 771
    sget-object v5, Lcom/tkay/expressad/b;->y:Ljava/lang/String;

    iget-object v6, p0, Lcom/tkay/expressad/reward/a/c$g;->h:Ljava/lang/String;

    invoke-virtual {v1, v5, v6}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 772
    iget-object v5, p0, Lcom/tkay/expressad/reward/a/c$g;->i:Ljava/lang/String;

    invoke-virtual {v1, v4, v5}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 773
    invoke-virtual {v1, v3, p2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 774
    invoke-virtual {v1, v2, p1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 775
    invoke-virtual {v0, v1}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    .line 776
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/c$g;->l:Landroid/os/Handler;

    invoke-virtual {p1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 778
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/c$g;->m:Lcom/tkay/expressad/reward/a/c$i;

    if-eqz p1, :cond_2

    .line 779
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/c$g;->g:Ljava/lang/String;

    invoke-interface {p1, p2}, Lcom/tkay/expressad/reward/a/c$i;->a(Ljava/lang/String;)V

    goto :goto_0

    .line 703
    :cond_1
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    const/16 v1, 0xc9

    .line 704
    iput v1, v0, Landroid/os/Message;->what:I

    .line 705
    new-instance v1, Landroid/os/Bundle;

    invoke-direct {v1}, Landroid/os/Bundle;-><init>()V

    .line 706
    iget-object v6, p0, Lcom/tkay/expressad/reward/a/c$g;->g:Ljava/lang/String;

    invoke-virtual {v1, v5, v6}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 707
    sget-object v5, Lcom/tkay/expressad/b;->y:Ljava/lang/String;

    iget-object v6, p0, Lcom/tkay/expressad/reward/a/c$g;->h:Ljava/lang/String;

    invoke-virtual {v1, v5, v6}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 708
    iget-object v5, p0, Lcom/tkay/expressad/reward/a/c$g;->i:Ljava/lang/String;

    invoke-virtual {v1, v4, v5}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 709
    invoke-virtual {v1, v3, p2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 710
    invoke-virtual {v1, v2, p1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 711
    invoke-virtual {v0, v1}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    .line 712
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/c$g;->l:Landroid/os/Handler;

    invoke-virtual {p1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 713
    iget-boolean p1, p0, Lcom/tkay/expressad/reward/a/c$g;->e:Z

    if-eqz p1, :cond_2

    :cond_2
    :goto_0
    return-void

    .line 744
    :cond_3
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    const/16 v1, 0x65

    .line 746
    iput v1, v0, Landroid/os/Message;->what:I

    .line 747
    new-instance v1, Landroid/os/Bundle;

    invoke-direct {v1}, Landroid/os/Bundle;-><init>()V

    .line 748
    iget-object v6, p0, Lcom/tkay/expressad/reward/a/c$g;->g:Ljava/lang/String;

    invoke-virtual {v1, v5, v6}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 749
    sget-object v5, Lcom/tkay/expressad/b;->y:Ljava/lang/String;

    iget-object v6, p0, Lcom/tkay/expressad/reward/a/c$g;->h:Ljava/lang/String;

    invoke-virtual {v1, v5, v6}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 750
    iget-object v5, p0, Lcom/tkay/expressad/reward/a/c$g;->i:Ljava/lang/String;

    invoke-virtual {v1, v4, v5}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 751
    invoke-virtual {v1, v3, p2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 752
    invoke-virtual {v1, v2, p1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 753
    invoke-virtual {v0, v1}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    .line 754
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/c$g;->l:Landroid/os/Handler;

    invoke-virtual {p1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void
.end method

.method public final a(Z)V
    .locals 0

    .line 589
    iput-boolean p1, p0, Lcom/tkay/expressad/reward/a/c$g;->e:Z

    return-void
.end method
