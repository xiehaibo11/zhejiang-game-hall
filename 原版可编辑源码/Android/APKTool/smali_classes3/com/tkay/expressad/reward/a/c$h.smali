.class final Lcom/tkay/expressad/reward/a/c$h;
.super Landroid/os/Handler;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/reward/a/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "h"
.end annotation


# instance fields
.field private a:Landroid/content/Context;

.field private b:Lcom/tkay/expressad/reward/a/c$c;

.field private c:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Lcom/tkay/expressad/reward/a/c$c;",
            ">;"
        }
    .end annotation
.end field

.field private d:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Ljava/util/concurrent/CopyOnWriteArrayList<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;>;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>(Landroid/os/Looper;)V
    .locals 0

    .line 1076
    invoke-direct {p0, p1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    .line 1077
    new-instance p1, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {p1}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/reward/a/c$h;->c:Ljava/util/concurrent/ConcurrentHashMap;

    .line 1078
    new-instance p1, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {p1}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/reward/a/c$h;->d:Ljava/util/concurrent/ConcurrentHashMap;

    return-void
.end method


# virtual methods
.method public final a(Landroid/content/Context;)V
    .locals 0

    .line 1086
    iput-object p1, p0, Lcom/tkay/expressad/reward/a/c$h;->a:Landroid/content/Context;

    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/reward/a/c$c;)V
    .locals 2

    .line 1082
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/c$h;->c:Ljava/util/concurrent/ConcurrentHashMap;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "_"

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1, p3}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/util/concurrent/CopyOnWriteArrayList;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/concurrent/CopyOnWriteArrayList<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;)V"
        }
    .end annotation

    .line 1091
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/c$h;->d:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1, p2}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public final handleMessage(Landroid/os/Message;)V
    .locals 24

    move-object/from16 v1, p0

    move-object/from16 v0, p1

    .line 1096
    invoke-virtual/range {p1 .. p1}, Landroid/os/Message;->getData()Landroid/os/Bundle;

    move-result-object v2

    .line 1097
    sget-object v3, Lcom/tkay/expressad/b;->y:Ljava/lang/String;

    invoke-virtual {v2, v3}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    const-string v4, "unit_id"

    .line 1098
    invoke-virtual {v2, v4}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    const-string v5, "request_id"

    .line 1099
    invoke-virtual {v2, v5}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    .line 1100
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, "_"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    .line 1101
    invoke-static {}, Lcom/tkay/expressad/reward/a/c;->b()Ljava/util/Map;

    move-result-object v7

    invoke-interface {v7, v6}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/tkay/expressad/reward/a/c$a;

    .line 1102
    iget-object v8, v1, Lcom/tkay/expressad/reward/a/c$h;->c:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v8, v6}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Lcom/tkay/expressad/reward/a/c$c;

    .line 1103
    iget-object v9, v1, Lcom/tkay/expressad/reward/a/c$h;->d:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v9, v6}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v9

    move-object/from16 v16, v9

    check-cast v16, Ljava/util/concurrent/CopyOnWriteArrayList;

    .line 1105
    iget v9, v0, Landroid/os/Message;->what:I

    const/4 v15, 0x0

    packed-switch v9, :pswitch_data_0

    packed-switch v9, :pswitch_data_1

    goto/16 :goto_a

    :pswitch_0
    move-object v2, v6

    move/from16 v18, v15

    goto/16 :goto_8

    :pswitch_1
    if-eqz v7, :cond_23

    if-eqz v8, :cond_23

    const-string v9, "message"

    .line 1149
    invoke-virtual {v2, v9}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    if-nez v9, :cond_0

    const-string v9, ""

    .line 1153
    :cond_0
    new-instance v10, Ljava/lang/StringBuilder;

    const-string v14, "resource download failed "

    invoke-direct {v10, v14}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget v11, v0, Landroid/os/Message;->what:I

    invoke-static {v11}, Lcom/tkay/expressad/reward/a/c;->a(I)Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v11, " "

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v9, 0x0

    .line 1156
    iget-object v10, v7, Lcom/tkay/expressad/reward/a/c$a;->h:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz v10, :cond_1

    iget-object v10, v7, Lcom/tkay/expressad/reward/a/c$a;->h:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v10}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v10

    if-lez v10, :cond_1

    .line 1157
    iget-object v9, v7, Lcom/tkay/expressad/reward/a/c$a;->h:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v9, v15}, Ljava/util/concurrent/CopyOnWriteArrayList;->get(I)Ljava/lang/Object;

    move-result-object v9

    check-cast v9, Lcom/tkay/expressad/foundation/d/c;

    .line 1161
    :cond_1
    :try_start_0
    iget-boolean v10, v7, Lcom/tkay/expressad/reward/a/c$a;->a:Z

    const/16 v17, 0x3

    const/16 v12, 0xcb

    const/16 v11, 0xc9

    const/16 v15, 0xc8

    const/16 v19, 0x2

    const/4 v13, 0x1

    if-eqz v10, :cond_1b

    iget-object v10, v7, Lcom/tkay/expressad/reward/a/c$a;->i:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz v10, :cond_1b

    .line 1162
    iget v10, v7, Lcom/tkay/expressad/reward/a/c$a;->c:I

    if-ne v10, v13, :cond_8

    if-eqz v9, :cond_7

    .line 1164
    invoke-virtual {v9}, Lcom/tkay/expressad/foundation/d/c;->aB()Ljava/util/ArrayList;

    move-result-object v2

    if-eqz v2, :cond_7

    invoke-virtual {v9}, Lcom/tkay/expressad/foundation/d/c;->aB()Ljava/util/ArrayList;

    move-result-object v2

    invoke-virtual {v2}, Ljava/util/ArrayList;->size()I

    move-result v2

    if-lez v2, :cond_7

    .line 1165
    iget v0, v0, Landroid/os/Message;->what:I

    if-eq v0, v15, :cond_6

    if-eq v0, v11, :cond_5

    if-eq v0, v12, :cond_4

    const/16 v2, 0xcd

    if-eq v0, v2, :cond_2

    goto :goto_0

    .line 1182
    :cond_2
    invoke-virtual {v9}, Lcom/tkay/expressad/foundation/d/c;->aB()Ljava/util/ArrayList;

    move-result-object v0

    invoke-static/range {v17 .. v17}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    return-void

    .line 1185
    :cond_3
    iget-object v0, v7, Lcom/tkay/expressad/reward/a/c$a;->h:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz v0, :cond_7

    iget-object v0, v7, Lcom/tkay/expressad/reward/a/c$a;->h:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v0

    if-lez v0, :cond_7

    .line 1186
    iget-object v0, v7, Lcom/tkay/expressad/reward/a/c$a;->h:Ljava/util/concurrent/CopyOnWriteArrayList;

    const/4 v2, 0x0

    invoke-virtual {v0, v2}, Ljava/util/concurrent/CopyOnWriteArrayList;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/foundation/d/c;

    .line 1187
    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->ar()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->I()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_7

    .line 1188
    invoke-virtual {v9}, Lcom/tkay/expressad/foundation/d/c;->aB()Ljava/util/ArrayList;

    move-result-object v0

    invoke-static/range {v19 .. v19}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_7

    return-void

    .line 1172
    :cond_4
    invoke-virtual {v9}, Lcom/tkay/expressad/foundation/d/c;->aB()Ljava/util/ArrayList;

    move-result-object v0

    invoke-static {v13}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_7

    return-void

    .line 1177
    :cond_5
    invoke-virtual {v9}, Lcom/tkay/expressad/foundation/d/c;->aB()Ljava/util/ArrayList;

    move-result-object v0

    invoke-static/range {v19 .. v19}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_7

    return-void

    .line 1167
    :cond_6
    invoke-virtual {v9}, Lcom/tkay/expressad/foundation/d/c;->aB()Ljava/util/ArrayList;

    move-result-object v0

    const/4 v2, 0x0

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_7

    return-void

    .line 1198
    :cond_7
    :goto_0
    iget-object v0, v7, Lcom/tkay/expressad/reward/a/c$a;->h:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-interface {v8, v4, v0}, Lcom/tkay/expressad/reward/a/c$c;->a(Ljava/lang/String;Ljava/util/concurrent/CopyOnWriteArrayList;)V

    .line 1199
    iget-object v0, v1, Lcom/tkay/expressad/reward/a/c$h;->c:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, v6}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 1200
    invoke-static {}, Lcom/tkay/expressad/reward/a/c;->b()Ljava/util/Map;

    move-result-object v0

    invoke-interface {v0, v6}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 1201
    iget-object v0, v1, Lcom/tkay/expressad/reward/a/c$h;->d:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, v6}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    return-void

    :cond_8
    const-string v10, "url"

    .line 1203
    invoke-virtual {v2, v10}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 1204
    iget v0, v0, Landroid/os/Message;->what:I

    if-eq v0, v15, :cond_14

    if-eq v0, v11, :cond_f

    if-eq v0, v12, :cond_b

    const/16 v10, 0xcd

    if-eq v0, v10, :cond_9

    goto/16 :goto_4

    :cond_9
    if-eqz v9, :cond_a

    .line 1250
    invoke-virtual {v9}, Lcom/tkay/expressad/foundation/d/c;->aB()Ljava/util/ArrayList;

    move-result-object v0

    if-eqz v0, :cond_a

    invoke-virtual {v9}, Lcom/tkay/expressad/foundation/d/c;->aB()Ljava/util/ArrayList;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v0

    if-lez v0, :cond_a

    .line 1251
    invoke-virtual {v9}, Lcom/tkay/expressad/foundation/d/c;->aB()Ljava/util/ArrayList;

    move-result-object v0

    invoke-static/range {v17 .. v17}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_a

    return-void

    .line 1257
    :cond_a
    iget-object v0, v7, Lcom/tkay/expressad/reward/a/c$a;->i:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;->clear()V

    .line 1258
    invoke-static {}, Lcom/tkay/expressad/reward/a/c;->b()Ljava/util/Map;

    move-result-object v0

    invoke-interface {v0, v6}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 1259
    invoke-static {}, Lcom/tkay/expressad/reward/a/c;->b()Ljava/util/Map;

    move-result-object v0

    invoke-interface {v0, v6, v7}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto/16 :goto_4

    :cond_b
    if-eqz v9, :cond_c

    .line 1231
    invoke-virtual {v9}, Lcom/tkay/expressad/foundation/d/c;->aB()Ljava/util/ArrayList;

    move-result-object v0

    if-eqz v0, :cond_c

    invoke-virtual {v9}, Lcom/tkay/expressad/foundation/d/c;->aB()Ljava/util/ArrayList;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v0

    if-lez v0, :cond_c

    .line 1232
    invoke-virtual {v9}, Lcom/tkay/expressad/foundation/d/c;->aB()Ljava/util/ArrayList;

    move-result-object v0

    invoke-static {v13}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v9

    invoke-virtual {v0, v9}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_c

    return-void

    :cond_c
    const/4 v15, 0x0

    .line 1238
    :goto_1
    iget-object v0, v7, Lcom/tkay/expressad/reward/a/c$a;->i:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v0

    if-ge v15, v0, :cond_e

    .line 1239
    iget-object v0, v7, Lcom/tkay/expressad/reward/a/c$a;->i:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0, v15}, Ljava/util/concurrent/CopyOnWriteArrayList;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/foundation/d/c;

    .line 1240
    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v9

    if-eqz v9, :cond_d

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c$c;->e()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_d

    .line 1241
    iget-object v0, v7, Lcom/tkay/expressad/reward/a/c$a;->i:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0, v15}, Ljava/util/concurrent/CopyOnWriteArrayList;->remove(I)Ljava/lang/Object;

    :cond_d
    add-int/lit8 v15, v15, 0x1

    goto :goto_1

    .line 1244
    :cond_e
    invoke-static {}, Lcom/tkay/expressad/reward/a/c;->b()Ljava/util/Map;

    move-result-object v0

    invoke-interface {v0, v6}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 1245
    invoke-static {}, Lcom/tkay/expressad/reward/a/c;->b()Ljava/util/Map;

    move-result-object v0

    invoke-interface {v0, v6, v7}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto/16 :goto_4

    :cond_f
    if-eqz v9, :cond_10

    .line 1207
    invoke-virtual {v9}, Lcom/tkay/expressad/foundation/d/c;->aB()Ljava/util/ArrayList;

    move-result-object v0

    if-eqz v0, :cond_10

    invoke-virtual {v9}, Lcom/tkay/expressad/foundation/d/c;->aB()Ljava/util/ArrayList;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v0

    if-lez v0, :cond_10

    .line 1208
    invoke-virtual {v9}, Lcom/tkay/expressad/foundation/d/c;->aB()Ljava/util/ArrayList;

    move-result-object v0

    invoke-static/range {v19 .. v19}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v9

    invoke-virtual {v0, v9}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_10

    return-void

    :cond_10
    const/4 v15, 0x0

    .line 1215
    :goto_2
    iget-object v0, v7, Lcom/tkay/expressad/reward/a/c$a;->i:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v0

    if-ge v15, v0, :cond_13

    .line 1216
    iget-object v0, v7, Lcom/tkay/expressad/reward/a/c$a;->i:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0, v15}, Ljava/util/concurrent/CopyOnWriteArrayList;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/foundation/d/c;

    .line 1217
    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v9

    if-eqz v9, :cond_11

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v9

    invoke-virtual {v9}, Lcom/tkay/expressad/foundation/d/c$c;->d()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v9, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v9

    if-eqz v9, :cond_11

    .line 1218
    iget-object v9, v7, Lcom/tkay/expressad/reward/a/c$a;->i:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v9, v15}, Ljava/util/concurrent/CopyOnWriteArrayList;->remove(I)Ljava/lang/Object;

    .line 1221
    :cond_11
    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->I()Ljava/lang/String;

    move-result-object v9

    invoke-static {v9}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v9

    if-nez v9, :cond_12

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->I()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_12

    .line 1222
    iget-object v0, v7, Lcom/tkay/expressad/reward/a/c$a;->i:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0, v15}, Ljava/util/concurrent/CopyOnWriteArrayList;->remove(I)Ljava/lang/Object;

    :cond_12
    add-int/lit8 v15, v15, 0x1

    goto :goto_2

    .line 1225
    :cond_13
    invoke-static {}, Lcom/tkay/expressad/reward/a/c;->b()Ljava/util/Map;

    move-result-object v0

    invoke-interface {v0, v6}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 1226
    invoke-static {}, Lcom/tkay/expressad/reward/a/c;->b()Ljava/util/Map;

    move-result-object v0

    invoke-interface {v0, v6, v7}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_4

    :cond_14
    if-eqz v9, :cond_15

    .line 1264
    invoke-virtual {v9}, Lcom/tkay/expressad/foundation/d/c;->aB()Ljava/util/ArrayList;

    move-result-object v0

    if-eqz v0, :cond_15

    invoke-virtual {v9}, Lcom/tkay/expressad/foundation/d/c;->aB()Ljava/util/ArrayList;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v0

    if-lez v0, :cond_15

    .line 1265
    invoke-virtual {v9}, Lcom/tkay/expressad/foundation/d/c;->aB()Ljava/util/ArrayList;

    move-result-object v0

    const/16 v18, 0x0

    invoke-static/range {v18 .. v18}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v9

    invoke-virtual {v0, v9}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_16

    return-void

    :cond_15
    const/16 v18, 0x0

    :cond_16
    move/from16 v15, v18

    .line 1271
    :goto_3
    iget-object v0, v7, Lcom/tkay/expressad/reward/a/c$a;->i:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v0

    if-ge v15, v0, :cond_18

    .line 1272
    iget-object v0, v7, Lcom/tkay/expressad/reward/a/c$a;->i:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0, v15}, Ljava/util/concurrent/CopyOnWriteArrayList;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/foundation/d/c;

    .line 1273
    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->S()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_17

    .line 1274
    iget-object v0, v7, Lcom/tkay/expressad/reward/a/c$a;->i:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0, v15}, Ljava/util/concurrent/CopyOnWriteArrayList;->remove(I)Ljava/lang/Object;

    :cond_17
    add-int/lit8 v15, v15, 0x1

    goto :goto_3

    .line 1277
    :cond_18
    invoke-static {}, Lcom/tkay/expressad/reward/a/c;->b()Ljava/util/Map;

    move-result-object v0

    invoke-interface {v0, v6}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 1278
    invoke-static {}, Lcom/tkay/expressad/reward/a/c;->b()Ljava/util/Map;

    move-result-object v0

    invoke-interface {v0, v6, v7}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1282
    :goto_4
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/c;->a()Lcom/tkay/expressad/videocommon/b/c;

    move-result-object v10

    iget-object v11, v7, Lcom/tkay/expressad/reward/a/c$a;->e:Ljava/lang/String;

    iget-boolean v12, v7, Lcom/tkay/expressad/reward/a/c$a;->b:Z

    iget v13, v7, Lcom/tkay/expressad/reward/a/c$a;->d:I

    iget-boolean v0, v7, Lcom/tkay/expressad/reward/a/c$a;->a:Z

    iget v15, v7, Lcom/tkay/expressad/reward/a/c$a;->c:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2

    move-object v2, v14

    move v14, v0

    :try_start_1
    invoke-virtual/range {v10 .. v16}, Lcom/tkay/expressad/videocommon/b/c;->a(Ljava/lang/String;ZIZILjava/util/List;)Z

    move-result v0

    if-eqz v0, :cond_19

    .line 1285
    iget-object v0, v7, Lcom/tkay/expressad/reward/a/c$a;->h:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-interface {v8, v3, v4, v5, v0}, Lcom/tkay/expressad/reward/a/c$c;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/concurrent/CopyOnWriteArrayList;)V

    .line 1286
    iget-object v0, v1, Lcom/tkay/expressad/reward/a/c$h;->c:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, v6}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 1287
    invoke-static {}, Lcom/tkay/expressad/reward/a/c;->b()Ljava/util/Map;

    move-result-object v0

    invoke-interface {v0, v6}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 1288
    iget-object v0, v1, Lcom/tkay/expressad/reward/a/c$h;->d:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, v6}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    return-void

    .line 1290
    :cond_19
    iget-object v0, v7, Lcom/tkay/expressad/reward/a/c$a;->i:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v0

    if-nez v0, :cond_1a

    .line 1291
    iget-object v0, v7, Lcom/tkay/expressad/reward/a/c$a;->h:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-interface {v8, v4, v0}, Lcom/tkay/expressad/reward/a/c$c;->a(Ljava/lang/String;Ljava/util/concurrent/CopyOnWriteArrayList;)V

    .line 1292
    iget-object v0, v1, Lcom/tkay/expressad/reward/a/c$h;->c:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, v6}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 1293
    invoke-static {}, Lcom/tkay/expressad/reward/a/c;->b()Ljava/util/Map;

    move-result-object v0

    invoke-interface {v0, v6}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 1294
    iget-object v0, v1, Lcom/tkay/expressad/reward/a/c$h;->d:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, v6}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    :cond_1a
    return-void

    :cond_1b
    move-object v2, v14

    const/16 v10, 0xcd

    const/16 v18, 0x0

    .line 1301
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/c;->a()Lcom/tkay/expressad/videocommon/b/c;

    move-result-object v14

    iget-object v11, v7, Lcom/tkay/expressad/reward/a/c$a;->e:Ljava/lang/String;

    iget-boolean v12, v7, Lcom/tkay/expressad/reward/a/c$a;->b:Z

    iget v13, v7, Lcom/tkay/expressad/reward/a/c$a;->d:I

    iget-boolean v15, v7, Lcom/tkay/expressad/reward/a/c$a;->a:Z
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    move-object/from16 v22, v2

    :try_start_2
    iget v2, v7, Lcom/tkay/expressad/reward/a/c$a;->c:I

    move/from16 v23, v10

    move-object v10, v14

    const/16 v14, 0xc9

    move-object/from16 v20, v6

    const/16 v6, 0xcb

    const/16 v21, 0x1

    move v6, v14

    move v14, v15

    const/16 v6, 0xc8

    move v15, v2

    invoke-virtual/range {v10 .. v16}, Lcom/tkay/expressad/videocommon/b/c;->a(Ljava/lang/String;ZIZILjava/util/List;)Z

    move-result v2

    if-eqz v2, :cond_1c

    .line 1304
    iget-object v0, v7, Lcom/tkay/expressad/reward/a/c$a;->h:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-interface {v8, v3, v4, v5, v0}, Lcom/tkay/expressad/reward/a/c$c;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/concurrent/CopyOnWriteArrayList;)V

    goto :goto_6

    :cond_1c
    if-eqz v9, :cond_21

    .line 1307
    invoke-virtual {v9}, Lcom/tkay/expressad/foundation/d/c;->aB()Ljava/util/ArrayList;

    move-result-object v2

    if-eqz v2, :cond_21

    invoke-virtual {v9}, Lcom/tkay/expressad/foundation/d/c;->aB()Ljava/util/ArrayList;

    move-result-object v2

    invoke-virtual {v2}, Ljava/util/ArrayList;->size()I

    move-result v2

    if-lez v2, :cond_21

    .line 1308
    iget v0, v0, Landroid/os/Message;->what:I

    if-eq v0, v6, :cond_20

    const/16 v2, 0xc9

    if-eq v0, v2, :cond_1f

    const/16 v2, 0xcb

    if-eq v0, v2, :cond_1e

    const/16 v2, 0xcd

    if-eq v0, v2, :cond_1d

    goto :goto_5

    .line 1325
    :cond_1d
    invoke-virtual {v9}, Lcom/tkay/expressad/foundation/d/c;->aB()Ljava/util/ArrayList;

    move-result-object v0

    invoke-static/range {v17 .. v17}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_21

    return-void

    .line 1315
    :cond_1e
    invoke-virtual {v9}, Lcom/tkay/expressad/foundation/d/c;->aB()Ljava/util/ArrayList;

    move-result-object v0

    invoke-static/range {v21 .. v21}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_21

    return-void

    .line 1320
    :cond_1f
    invoke-virtual {v9}, Lcom/tkay/expressad/foundation/d/c;->aB()Ljava/util/ArrayList;

    move-result-object v0

    invoke-static/range {v19 .. v19}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_21

    return-void

    .line 1310
    :cond_20
    invoke-virtual {v9}, Lcom/tkay/expressad/foundation/d/c;->aB()Ljava/util/ArrayList;

    move-result-object v0

    invoke-static/range {v18 .. v18}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_21

    return-void

    .line 1332
    :cond_21
    :goto_5
    iget-object v0, v7, Lcom/tkay/expressad/reward/a/c$a;->h:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-interface {v8, v4, v0}, Lcom/tkay/expressad/reward/a/c$c;->a(Ljava/lang/String;Ljava/util/concurrent/CopyOnWriteArrayList;)V

    .line 1334
    :goto_6
    iget-object v0, v1, Lcom/tkay/expressad/reward/a/c$h;->c:Ljava/util/concurrent/ConcurrentHashMap;

    move-object/from16 v2, v20

    invoke-virtual {v0, v2}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 1335
    invoke-static {}, Lcom/tkay/expressad/reward/a/c;->b()Ljava/util/Map;

    move-result-object v0

    invoke-interface {v0, v2}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 1336
    iget-object v0, v1, Lcom/tkay/expressad/reward/a/c$h;->d:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, v2}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    return-void

    :catch_0
    move-exception v0

    goto :goto_7

    :catch_1
    move-exception v0

    move-object/from16 v22, v2

    goto :goto_7

    :catch_2
    move-exception v0

    move-object/from16 v22, v14

    .line 1339
    :goto_7
    iget-object v2, v7, Lcom/tkay/expressad/reward/a/c$a;->h:Ljava/util/concurrent/CopyOnWriteArrayList;

    new-instance v3, Ljava/lang/StringBuilder;

    move-object/from16 v5, v22

    invoke-direct {v3, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {v8, v4, v2}, Lcom/tkay/expressad/reward/a/c$c;->a(Ljava/lang/String;Ljava/util/concurrent/CopyOnWriteArrayList;)V

    goto :goto_a

    :goto_8
    if-eqz v7, :cond_23

    if-eqz v8, :cond_23

    .line 1126
    :try_start_3
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/c;->a()Lcom/tkay/expressad/videocommon/b/c;

    move-result-object v10

    iget-object v11, v7, Lcom/tkay/expressad/reward/a/c$a;->e:Ljava/lang/String;

    iget-boolean v12, v7, Lcom/tkay/expressad/reward/a/c$a;->b:Z

    iget v13, v7, Lcom/tkay/expressad/reward/a/c$a;->d:I

    iget-boolean v14, v7, Lcom/tkay/expressad/reward/a/c$a;->a:Z

    iget v15, v7, Lcom/tkay/expressad/reward/a/c$a;->c:I

    invoke-virtual/range {v10 .. v16}, Lcom/tkay/expressad/videocommon/b/c;->a(Ljava/lang/String;ZIZILjava/util/List;)Z

    move-result v15
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_3

    goto :goto_9

    :catch_3
    move-exception v0

    .line 1128
    sget-boolean v6, Lcom/tkay/expressad/b;->a:Z

    if-eqz v6, :cond_22

    .line 1129
    invoke-virtual {v0}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    :cond_22
    move/from16 v15, v18

    :goto_9
    if-eqz v15, :cond_23

    .line 1135
    iget-object v0, v7, Lcom/tkay/expressad/reward/a/c$a;->h:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-interface {v8, v3, v4, v5, v0}, Lcom/tkay/expressad/reward/a/c$c;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/concurrent/CopyOnWriteArrayList;)V

    .line 1136
    iget-object v0, v1, Lcom/tkay/expressad/reward/a/c$h;->c:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, v2}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 1137
    invoke-static {}, Lcom/tkay/expressad/reward/a/c;->b()Ljava/util/Map;

    move-result-object v0

    invoke-interface {v0, v2}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 1138
    iget-object v0, v1, Lcom/tkay/expressad/reward/a/c$h;->d:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, v2}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    :cond_23
    :goto_a
    return-void

    :pswitch_data_0
    .packed-switch 0x64
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
    .end packed-switch

    :pswitch_data_1
    .packed-switch 0xc8
        :pswitch_1
        :pswitch_1
        :pswitch_0
        :pswitch_1
        :pswitch_0
        :pswitch_1
    .end packed-switch
.end method
