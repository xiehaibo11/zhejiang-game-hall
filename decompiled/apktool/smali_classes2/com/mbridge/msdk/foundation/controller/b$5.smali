.class final Lcom/mbridge/msdk/foundation/controller/b$5;
.super Ljava/lang/Object;
.source "SDKController.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/foundation/controller/b;->c()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/foundation/controller/b;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/foundation/controller/b;)V
    .locals 0

    .line 644
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/controller/b$5;->a:Lcom/mbridge/msdk/foundation/controller/b;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 11

    .line 651
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/c/a;->a()Lcom/mbridge/msdk/foundation/same/report/c/a;

    iget-object v0, p0, Lcom/mbridge/msdk/foundation/controller/b$5;->a:Lcom/mbridge/msdk/foundation/controller/b;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/controller/b;->c(Lcom/mbridge/msdk/foundation/controller/b;)Landroid/content/Context;

    move-result-object v0

    const/4 v1, 0x0

    const/4 v2, 0x5

    if-nez v0, :cond_0

    goto :goto_0

    .line 1046
    :cond_0
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v3

    invoke-static {v3}, Lcom/mbridge/msdk/foundation/db/o;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/o;

    move-result-object v3

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/db/o;->a()I

    move-result v3

    if-lez v3, :cond_1

    .line 1047
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/o;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/o;

    move-result-object v0

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/foundation/db/o;->a(I)Ljava/util/List;

    move-result-object v0

    goto :goto_1

    :cond_1
    :goto_0
    move-object v0, v1

    :goto_1
    if-eqz v0, :cond_2

    .line 652
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v3

    if-lez v3, :cond_2

    .line 653
    iget-object v3, p0, Lcom/mbridge/msdk/foundation/controller/b$5;->a:Lcom/mbridge/msdk/foundation/controller/b;

    iget-object v3, v3, Lcom/mbridge/msdk/foundation/controller/b;->i:Landroid/os/Handler;

    invoke-virtual {v3}, Landroid/os/Handler;->obtainMessage()Landroid/os/Message;

    move-result-object v3

    const/4 v4, 0x2

    .line 654
    iput v4, v3, Landroid/os/Message;->what:I

    .line 655
    iput-object v0, v3, Landroid/os/Message;->obj:Ljava/lang/Object;

    .line 656
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/controller/b$5;->a:Lcom/mbridge/msdk/foundation/controller/b;

    iget-object v0, v0, Lcom/mbridge/msdk/foundation/controller/b;->i:Landroid/os/Handler;

    invoke-virtual {v0, v3}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 658
    :cond_2
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/controller/b$5;->a:Lcom/mbridge/msdk/foundation/controller/b;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/controller/b;->c(Lcom/mbridge/msdk/foundation/controller/b;)Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v0

    .line 659
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/d;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/d;

    move-result-object v3

    .line 661
    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/db/d;->a()I

    move-result v4

    const/16 v5, 0x14

    if-lt v4, v5, :cond_3

    .line 662
    invoke-virtual {v3, v5}, Lcom/mbridge/msdk/foundation/db/d;->a(I)Ljava/util/List;

    move-result-object v3

    invoke-static {v3}, Lcom/mbridge/msdk/foundation/entity/e;->a(Ljava/util/List;)Ljava/lang/String;

    move-result-object v3

    .line 663
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v4

    .line 664
    iput-object v3, v4, Landroid/os/Message;->obj:Ljava/lang/Object;

    const/4 v3, 0x4

    .line 665
    iput v3, v4, Landroid/os/Message;->what:I

    .line 666
    iget-object v3, p0, Lcom/mbridge/msdk/foundation/controller/b$5;->a:Lcom/mbridge/msdk/foundation/controller/b;

    iget-object v3, v3, Lcom/mbridge/msdk/foundation/controller/b;->i:Landroid/os/Handler;

    invoke-virtual {v3, v4}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 668
    :cond_3
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/m;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/m;

    move-result-object v0

    .line 670
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/db/m;->a()I

    move-result v3

    if-le v3, v5, :cond_8

    .line 671
    invoke-virtual {v0, v5}, Lcom/mbridge/msdk/foundation/db/m;->a(I)Ljava/util/List;

    move-result-object v0

    if-eqz v0, :cond_7

    .line 1171
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v3

    if-lez v3, :cond_7

    .line 1172
    new-instance v1, Ljava/lang/StringBuffer;

    invoke-direct {v1}, Ljava/lang/StringBuffer;-><init>()V

    .line 1173
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_2
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_6

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mbridge/msdk/foundation/entity/j;

    .line 1174
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v4

    const-string v5, "authority_general_data"

    invoke-virtual {v4, v5}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v4
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v5, "&fb="

    const-string v6, "&key=2000006"

    const-string v7, "&unit_id="

    const-string v8, "&num="

    const-string v9, "&time="

    const-string v10, "ad_source_id="

    if-eqz v4, :cond_4

    .line 1175
    :try_start_1
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/j;->b()I

    move-result v10

    invoke-virtual {v4, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v4}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1177
    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/j;->c()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v4, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    .line 1176
    invoke-virtual {v1, v4}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1178
    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/j;->d()I

    move-result v8

    invoke-virtual {v4, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v4}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1179
    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/j;->e()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v4}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 1180
    invoke-virtual {v1, v6}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1181
    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/j;->f()I

    move-result v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v4}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "&network_str="

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1182
    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/j;->i()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v4}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "&network_type="

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1183
    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/j;->h()I

    move-result v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v4}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    goto :goto_3

    .line 1186
    :cond_4
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/j;->b()I

    move-result v10

    invoke-virtual {v4, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v4}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1188
    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/j;->c()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v4, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    .line 1187
    invoke-virtual {v1, v4}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1189
    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/j;->d()I

    move-result v8

    invoke-virtual {v4, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v4}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1190
    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/j;->e()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v4}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 1191
    invoke-virtual {v1, v6}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1192
    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/j;->f()I

    move-result v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v4}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 1195
    :goto_3
    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/j;->a()I

    move-result v4

    const/4 v5, 0x1

    if-ne v4, v5, :cond_5

    const-string v4, "&hb=1"

    .line 1196
    invoke-virtual {v1, v4}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 1198
    :cond_5
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "&timeout="

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/j;->g()I

    move-result v3

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, "\n"

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    goto/16 :goto_2

    .line 1200
    :cond_6
    invoke-virtual {v1}, Ljava/lang/StringBuffer;->toString()Ljava/lang/String;

    move-result-object v1

    .line 672
    :cond_7
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    .line 673
    iput-object v1, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    .line 674
    iput v2, v0, Landroid/os/Message;->what:I

    .line 675
    iget-object v1, p0, Lcom/mbridge/msdk/foundation/controller/b$5;->a:Lcom/mbridge/msdk/foundation/controller/b;

    iget-object v1, v1, Lcom/mbridge/msdk/foundation/controller/b;->i:Landroid/os/Handler;

    invoke-virtual {v1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 677
    :cond_8
    sget-object v0, Lcom/mbridge/msdk/foundation/same/b/c;->i:Lcom/mbridge/msdk/foundation/same/b/c;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/same/b/e;->b(Lcom/mbridge/msdk/foundation/same/b/c;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "/"

    .line 679
    new-instance v2, Ljava/io/File;

    invoke-direct {v2, v0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 680
    invoke-virtual {v2}, Ljava/io/File;->exists()Z

    move-result v3

    if-eqz v3, :cond_9

    invoke-virtual {v2}, Ljava/io/File;->isDirectory()Z

    move-result v3

    if-eqz v3, :cond_9

    .line 681
    invoke-virtual {v2}, Ljava/io/File;->list()[Ljava/lang/String;

    move-result-object v3

    array-length v3, v3

    if-lez v3, :cond_9

    .line 682
    invoke-virtual {v2}, Ljava/io/File;->list()[Ljava/lang/String;

    move-result-object v2

    array-length v3, v2

    const/4 v4, 0x0

    :goto_4
    if-ge v4, v3, :cond_9

    aget-object v5, v2, v4

    .line 683
    new-instance v6, Ljava/io/File;

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-direct {v6, v5}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 684
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v5

    .line 685
    iput-object v6, v5, Landroid/os/Message;->obj:Ljava/lang/Object;

    const/4 v6, 0x3

    .line 686
    iput v6, v5, Landroid/os/Message;->what:I

    .line 687
    iget-object v6, p0, Lcom/mbridge/msdk/foundation/controller/b$5;->a:Lcom/mbridge/msdk/foundation/controller/b;

    iget-object v6, v6, Lcom/mbridge/msdk/foundation/controller/b;->i:Landroid/os/Handler;

    invoke-virtual {v6, v5}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    add-int/lit8 v4, v4, 0x1

    goto :goto_4

    :catch_0
    const-string v0, "SDKController"

    const-string v1, "report netstate error !"

    .line 693
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_9
    return-void
.end method
