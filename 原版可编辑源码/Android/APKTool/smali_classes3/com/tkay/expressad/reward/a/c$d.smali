.class final Lcom/tkay/expressad/reward/a/c$d;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/videocommon/b/g$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/reward/a/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "d"
.end annotation


# static fields
.field public static final a:I = 0x1f1

.field public static final b:I = 0x139

.field public static final c:I = 0x35b


# instance fields
.field private d:Z

.field private e:I

.field private final f:Ljava/lang/String;

.field private final g:Ljava/lang/String;

.field private final h:Ljava/lang/String;

.field private i:Lcom/tkay/expressad/foundation/d/c;

.field private j:Lcom/tkay/expressad/reward/a/c$i;

.field private k:Landroid/os/Handler;

.field private l:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;"
        }
    .end annotation
.end field

.field private final m:J


# direct methods
.method public constructor <init>(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/reward/a/c$i;Landroid/os/Handler;Ljava/util/List;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Lcom/tkay/expressad/foundation/d/c;",
            "Lcom/tkay/expressad/reward/a/c$i;",
            "Landroid/os/Handler;",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;)V"
        }
    .end annotation

    .line 824
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 813
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/a/c$d;->d:Z

    .line 825
    iput p1, p0, Lcom/tkay/expressad/reward/a/c$d;->e:I

    .line 826
    iput-object p2, p0, Lcom/tkay/expressad/reward/a/c$d;->f:Ljava/lang/String;

    .line 827
    iput-object p3, p0, Lcom/tkay/expressad/reward/a/c$d;->g:Ljava/lang/String;

    .line 828
    iput-object p4, p0, Lcom/tkay/expressad/reward/a/c$d;->h:Ljava/lang/String;

    .line 829
    iput-object p5, p0, Lcom/tkay/expressad/reward/a/c$d;->i:Lcom/tkay/expressad/foundation/d/c;

    .line 830
    iput-object p6, p0, Lcom/tkay/expressad/reward/a/c$d;->j:Lcom/tkay/expressad/reward/a/c$i;

    .line 831
    iput-object p7, p0, Lcom/tkay/expressad/reward/a/c$d;->k:Landroid/os/Handler;

    .line 832
    iput-object p8, p0, Lcom/tkay/expressad/reward/a/c$d;->l:Ljava/util/List;

    .line 833
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p1

    iput-wide p1, p0, Lcom/tkay/expressad/reward/a/c$d;->m:J

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;)V
    .locals 6

    .line 842
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/j;->a()Lcom/tkay/expressad/videocommon/b/j;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, p1, v1}, Lcom/tkay/expressad/videocommon/b/j;->b(Ljava/lang/String;Z)V

    .line 843
    iget v0, p0, Lcom/tkay/expressad/reward/a/c$d;->e:I

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

    .line 895
    :cond_0
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object p1

    const/16 v0, 0x69

    .line 896
    iput v0, p1, Landroid/os/Message;->what:I

    .line 897
    new-instance v0, Landroid/os/Bundle;

    invoke-direct {v0}, Landroid/os/Bundle;-><init>()V

    .line 898
    iget-object v1, p0, Lcom/tkay/expressad/reward/a/c$d;->g:Ljava/lang/String;

    invoke-virtual {v0, v5, v1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 899
    sget-object v1, Lcom/tkay/expressad/b;->y:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/expressad/reward/a/c$d;->f:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 900
    iget-object v1, p0, Lcom/tkay/expressad/reward/a/c$d;->h:Ljava/lang/String;

    invoke-virtual {v0, v4, v1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 901
    invoke-virtual {p1, v0}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    .line 902
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/c$d;->k:Landroid/os/Handler;

    invoke-virtual {v0, p1}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 904
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/c$d;->j:Lcom/tkay/expressad/reward/a/c$i;

    if-eqz p1, :cond_2

    .line 905
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/c$d;->f:Ljava/lang/String;

    iget-object v1, p0, Lcom/tkay/expressad/reward/a/c$d;->g:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/expressad/reward/a/c$d;->h:Ljava/lang/String;

    invoke-interface {p1, v0, v1, v2}, Lcom/tkay/expressad/reward/a/c$i;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 845
    :cond_1
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    .line 846
    iput v3, v0, Landroid/os/Message;->what:I

    .line 847
    new-instance v1, Landroid/os/Bundle;

    invoke-direct {v1}, Landroid/os/Bundle;-><init>()V

    .line 848
    iget-object v3, p0, Lcom/tkay/expressad/reward/a/c$d;->g:Ljava/lang/String;

    invoke-virtual {v1, v5, v3}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 849
    sget-object v3, Lcom/tkay/expressad/b;->y:Ljava/lang/String;

    iget-object v5, p0, Lcom/tkay/expressad/reward/a/c$d;->f:Ljava/lang/String;

    invoke-virtual {v1, v3, v5}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 850
    iget-object v3, p0, Lcom/tkay/expressad/reward/a/c$d;->h:Ljava/lang/String;

    invoke-virtual {v1, v4, v3}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 851
    invoke-virtual {v1, v2, p1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 852
    invoke-virtual {v0, v1}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    .line 853
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/c$d;->k:Landroid/os/Handler;

    invoke-virtual {p1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 855
    iget-boolean p1, p0, Lcom/tkay/expressad/reward/a/c$d;->d:Z

    if-eqz p1, :cond_2

    .line 856
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    :cond_2
    :goto_0
    return-void

    .line 881
    :cond_3
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    .line 882
    iput v3, v0, Landroid/os/Message;->what:I

    .line 883
    new-instance v1, Landroid/os/Bundle;

    invoke-direct {v1}, Landroid/os/Bundle;-><init>()V

    .line 884
    iget-object v3, p0, Lcom/tkay/expressad/reward/a/c$d;->g:Ljava/lang/String;

    invoke-virtual {v1, v5, v3}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 885
    sget-object v3, Lcom/tkay/expressad/b;->y:Ljava/lang/String;

    iget-object v5, p0, Lcom/tkay/expressad/reward/a/c$d;->f:Ljava/lang/String;

    invoke-virtual {v1, v3, v5}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 886
    iget-object v3, p0, Lcom/tkay/expressad/reward/a/c$d;->h:Ljava/lang/String;

    invoke-virtual {v1, v4, v3}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 887
    invoke-virtual {v1, v2, p1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 888
    invoke-virtual {v0, v1}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    .line 889
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/c$d;->k:Landroid/os/Handler;

    invoke-virtual {p1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 7

    .line 914
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/j;->a()Lcom/tkay/expressad/videocommon/b/j;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, p1, v1}, Lcom/tkay/expressad/videocommon/b/j;->b(Ljava/lang/String;Z)V

    .line 915
    iget v0, p0, Lcom/tkay/expressad/reward/a/c$d;->e:I

    const/16 v1, 0x139

    const-string v2, "url"

    const/16 v3, 0xc9

    const-string v4, "message"

    const-string v5, "request_id"

    const-string v6, "unit_id"

    if-eq v0, v1, :cond_3

    const/16 v1, 0x1f1

    if-eq v0, v1, :cond_1

    const/16 p1, 0x35b

    if-eq v0, p1, :cond_0

    goto :goto_0

    .line 988
    :cond_0
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object p1

    const/16 v0, 0xcd

    .line 989
    iput v0, p1, Landroid/os/Message;->what:I

    .line 990
    new-instance v0, Landroid/os/Bundle;

    invoke-direct {v0}, Landroid/os/Bundle;-><init>()V

    .line 991
    iget-object v1, p0, Lcom/tkay/expressad/reward/a/c$d;->g:Ljava/lang/String;

    invoke-virtual {v0, v6, v1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 992
    sget-object v1, Lcom/tkay/expressad/b;->y:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/expressad/reward/a/c$d;->f:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 993
    iget-object v1, p0, Lcom/tkay/expressad/reward/a/c$d;->h:Ljava/lang/String;

    invoke-virtual {v0, v5, v1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 994
    invoke-virtual {v0, v4, p2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 995
    invoke-virtual {p1, v0}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    .line 996
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/c$d;->k:Landroid/os/Handler;

    invoke-virtual {p2, p1}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 998
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/c$d;->j:Lcom/tkay/expressad/reward/a/c$i;

    if-eqz p1, :cond_2

    .line 999
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/c$d;->g:Ljava/lang/String;

    invoke-interface {p1, p2}, Lcom/tkay/expressad/reward/a/c$i;->a(Ljava/lang/String;)V

    goto :goto_0

    .line 924
    :cond_1
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    .line 925
    iput v3, v0, Landroid/os/Message;->what:I

    .line 926
    new-instance v1, Landroid/os/Bundle;

    invoke-direct {v1}, Landroid/os/Bundle;-><init>()V

    .line 927
    iget-object v3, p0, Lcom/tkay/expressad/reward/a/c$d;->g:Ljava/lang/String;

    invoke-virtual {v1, v6, v3}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 928
    sget-object v3, Lcom/tkay/expressad/b;->y:Ljava/lang/String;

    iget-object v6, p0, Lcom/tkay/expressad/reward/a/c$d;->f:Ljava/lang/String;

    invoke-virtual {v1, v3, v6}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 929
    iget-object v3, p0, Lcom/tkay/expressad/reward/a/c$d;->h:Ljava/lang/String;

    invoke-virtual {v1, v5, v3}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 930
    invoke-virtual {v1, v2, p1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 931
    invoke-virtual {v1, v4, p2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 932
    invoke-virtual {v0, v1}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    .line 933
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/c$d;->k:Landroid/os/Handler;

    invoke-virtual {p1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 935
    iget-boolean p1, p0, Lcom/tkay/expressad/reward/a/c$d;->d:Z

    if-eqz p1, :cond_2

    .line 936
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    :cond_2
    :goto_0
    return-void

    .line 967
    :cond_3
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    .line 968
    iput v3, v0, Landroid/os/Message;->what:I

    .line 969
    new-instance v1, Landroid/os/Bundle;

    invoke-direct {v1}, Landroid/os/Bundle;-><init>()V

    .line 970
    iget-object v3, p0, Lcom/tkay/expressad/reward/a/c$d;->g:Ljava/lang/String;

    invoke-virtual {v1, v6, v3}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 971
    sget-object v3, Lcom/tkay/expressad/b;->y:Ljava/lang/String;

    iget-object v6, p0, Lcom/tkay/expressad/reward/a/c$d;->f:Ljava/lang/String;

    invoke-virtual {v1, v3, v6}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 972
    iget-object v3, p0, Lcom/tkay/expressad/reward/a/c$d;->h:Ljava/lang/String;

    invoke-virtual {v1, v5, v3}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 973
    invoke-virtual {v1, v2, p1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 974
    invoke-virtual {v1, v4, p2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 975
    invoke-virtual {v0, v1}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    .line 976
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/c$d;->k:Landroid/os/Handler;

    invoke-virtual {p1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void
.end method

.method public final a(Z)V
    .locals 0

    .line 837
    iput-boolean p1, p0, Lcom/tkay/expressad/reward/a/c$d;->d:Z

    return-void
.end method
