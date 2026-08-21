.class final Lcom/tkay/expressad/reward/player/TYRewardVideoActivity$a;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "a"
.end annotation


# instance fields
.field private final a:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/expressad/videocommon/b/a;",
            ">;"
        }
    .end annotation
.end field

.field private final b:Ljava/lang/String;

.field private final c:Ljava/lang/String;


# direct methods
.method public constructor <init>(Ljava/util/List;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/videocommon/b/a;",
            ">;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ")V"
        }
    .end annotation

    .line 861
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 862
    iput-object p1, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity$a;->a:Ljava/util/List;

    .line 863
    iput-object p2, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity$a;->b:Ljava/lang/String;

    .line 864
    iput-object p3, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity$a;->c:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 5

    .line 870
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity$a;->a:Ljava/util/List;

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity$a;->a:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_3

    .line 871
    iget-object v0, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity$a;->a:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_3

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/videocommon/b/a;

    if-eqz v1, :cond_0

    .line 872
    invoke-virtual {v1}, Lcom/tkay/expressad/videocommon/b/a;->n()Lcom/tkay/expressad/foundation/d/c;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 873
    invoke-virtual {v1}, Lcom/tkay/expressad/videocommon/b/a;->n()Lcom/tkay/expressad/foundation/d/c;

    move-result-object v1

    .line 875
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->S()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 876
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/c;->a()Lcom/tkay/expressad/videocommon/b/c;

    move-result-object v3

    iget-object v4, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity$a;->b:Ljava/lang/String;

    .line 1303
    invoke-virtual {v3, v4}, Lcom/tkay/expressad/videocommon/b/c;->c(Ljava/lang/String;)Lcom/tkay/expressad/videocommon/b/n;

    move-result-object v3
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    if-eqz v3, :cond_1

    .line 1306
    :try_start_1
    invoke-virtual {v3, v2}, Lcom/tkay/expressad/videocommon/b/n;->b(Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    :catch_0
    :cond_1
    if-eqz v1, :cond_0

    .line 877
    :try_start_2
    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 878
    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c$c;->e()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    const-string v3, "_"

    if-nez v2, :cond_2

    .line 879
    :try_start_3
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v4, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity$a;->b:Ljava/lang/String;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity$a;->c:Ljava/lang/String;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v4

    invoke-virtual {v4}, Lcom/tkay/expressad/foundation/d/c$c;->e()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 880
    invoke-static {v2}, Lcom/tkay/expressad/videocommon/a;->b(Ljava/lang/String;)V

    .line 881
    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->w()I

    move-result v2

    invoke-static {v2, v1}, Lcom/tkay/expressad/videocommon/a;->b(ILcom/tkay/expressad/foundation/d/c;)V

    .line 883
    :cond_2
    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->ar()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    .line 884
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v4, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity$a;->b:Ljava/lang/String;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity$a;->c:Ljava/lang/String;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->ar()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 885
    invoke-static {v1}, Lcom/tkay/expressad/videocommon/a;->b(Ljava/lang/String;)V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_1

    goto/16 :goto_0

    :cond_3
    return-void

    :catch_1
    move-exception v0

    .line 894
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method
