.class final Lcom/tkay/core/common/k/c$3;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/g;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/common/f/g;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/f/g;)V
    .locals 0

    .line 1068
    iput-object p1, p0, Lcom/tkay/core/common/k/c$3;->a:Lcom/tkay/core/common/f/g;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 7

    .line 1071
    iget-object v0, p0, Lcom/tkay/core/common/k/c$3;->a:Lcom/tkay/core/common/f/g;

    iget-object v0, v0, Lcom/tkay/core/common/f/g;->e:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1072
    iget-object v0, p0, Lcom/tkay/core/common/k/c$3;->a:Lcom/tkay/core/common/f/g;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->q()Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/tkay/core/common/f/g;->e:Ljava/lang/String;

    .line 1076
    :cond_0
    iget-object v0, p0, Lcom/tkay/core/common/k/c$3;->a:Lcom/tkay/core/common/f/g;

    iget-object v0, v0, Lcom/tkay/core/common/f/g;->d:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 1077
    iget-object v0, p0, Lcom/tkay/core/common/k/c$3;->a:Lcom/tkay/core/common/f/g;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/core/common/k/c$3;->a:Lcom/tkay/core/common/f/g;

    iget-object v2, v2, Lcom/tkay/core/common/f/g;->d:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/b/m;->g(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/tkay/core/common/f/g;->f:Ljava/lang/String;

    .line 1078
    iget-object v0, p0, Lcom/tkay/core/common/k/c$3;->a:Lcom/tkay/core/common/f/g;

    .line 2209
    iget-object v1, v0, Lcom/tkay/core/common/f/g;->d:Ljava/lang/String;

    .line 2210
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/c/e;->a(Landroid/content/Context;)Lcom/tkay/core/c/e;

    move-result-object v2

    invoke-virtual {v2, v1}, Lcom/tkay/core/c/e;->b(Ljava/lang/String;)Lcom/tkay/core/c/d;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 2212
    invoke-virtual {v1}, Lcom/tkay/core/c/d;->ax()Lorg/json/JSONObject;

    move-result-object v1

    iput-object v1, v0, Lcom/tkay/core/common/f/g;->E:Lorg/json/JSONObject;

    .line 1081
    :cond_1
    iget-object v0, p0, Lcom/tkay/core/common/k/c$3;->a:Lcom/tkay/core/common/f/g;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    invoke-static {v1, v2}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/tkay/core/common/f/g;->i:Ljava/lang/String;

    .line 1082
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/c/b;->a(Landroid/content/Context;)Lcom/tkay/core/c/b;

    move-result-object v0

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/tkay/core/c/b;->b(Ljava/lang/String;)Lcom/tkay/core/c/a;

    move-result-object v0

    const/4 v1, 0x0

    if-eqz v0, :cond_c

    .line 1086
    iget-object v2, p0, Lcom/tkay/core/common/k/c$3;->a:Lcom/tkay/core/common/f/g;

    .line 3143
    iget-object v3, v2, Lcom/tkay/core/common/f/g;->a:Ljava/lang/String;

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    const/4 v4, 0x1

    if-nez v3, :cond_4

    iget-object v3, v2, Lcom/tkay/core/common/f/g;->B:Ljava/lang/String;

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_4

    iget-object v3, v2, Lcom/tkay/core/common/f/g;->A:Ljava/lang/String;

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_2

    goto :goto_1

    .line 3148
    :cond_2
    iget-object v3, v2, Lcom/tkay/core/common/f/g;->a:Ljava/lang/String;

    invoke-virtual {v0, v3}, Lcom/tkay/core/c/a;->e(Ljava/lang/String;)Ljava/util/Map;

    move-result-object v3

    if-eqz v3, :cond_4

    const-string v5, "0"

    .line 3152
    invoke-interface {v3, v5}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_3

    .line 3153
    invoke-interface {v3, v5}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    .line 3154
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_4

    iget-object v2, v2, Lcom/tkay/core/common/f/g;->A:Ljava/lang/String;

    invoke-virtual {v3, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_4

    :goto_0
    move v2, v4

    goto :goto_2

    .line 3155
    :cond_3
    iget-object v5, v2, Lcom/tkay/core/common/f/g;->B:Ljava/lang/String;

    invoke-interface {v3, v5}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_4

    .line 3156
    iget-object v5, v2, Lcom/tkay/core/common/f/g;->B:Ljava/lang/String;

    invoke-interface {v3, v5}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    .line 3157
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_4

    iget-object v2, v2, Lcom/tkay/core/common/f/g;->A:Ljava/lang/String;

    invoke-virtual {v3, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_4

    goto :goto_0

    :cond_4
    :goto_1
    move v2, v1

    .line 1089
    :goto_2
    invoke-virtual {v0}, Lcom/tkay/core/c/a;->al()Ljava/lang/String;

    move-result-object v3

    .line 1090
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_5

    .line 1091
    iget-object v5, p0, Lcom/tkay/core/common/k/c$3;->a:Lcom/tkay/core/common/f/g;

    invoke-static {v5, v3}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/g;Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_5

    return-void

    .line 1097
    :cond_5
    invoke-virtual {v0}, Lcom/tkay/core/c/a;->aj()Ljava/util/Map;

    move-result-object v3

    if-eqz v3, :cond_8

    .line 1100
    iget-object v5, p0, Lcom/tkay/core/common/k/c$3;->a:Lcom/tkay/core/common/f/g;

    iget-object v5, v5, Lcom/tkay/core/common/f/g;->A:Ljava/lang/String;

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-eqz v5, :cond_6

    .line 1101
    iget-object v5, p0, Lcom/tkay/core/common/k/c$3;->a:Lcom/tkay/core/common/f/g;

    iget-object v5, v5, Lcom/tkay/core/common/f/g;->a:Ljava/lang/String;

    invoke-interface {v3, v5}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v3

    goto :goto_3

    .line 1103
    :cond_6
    iget-object v5, p0, Lcom/tkay/core/common/k/c$3;->a:Lcom/tkay/core/common/f/g;

    iget-object v5, v5, Lcom/tkay/core/common/f/g;->a:Ljava/lang/String;

    invoke-interface {v3, v5}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_7

    .line 1104
    iget-object v5, p0, Lcom/tkay/core/common/k/c$3;->a:Lcom/tkay/core/common/f/g;

    iget-object v5, v5, Lcom/tkay/core/common/f/g;->a:Ljava/lang/String;

    invoke-interface {v3, v5}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    .line 1105
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_7

    iget-object v5, p0, Lcom/tkay/core/common/k/c$3;->a:Lcom/tkay/core/common/f/g;

    iget-object v5, v5, Lcom/tkay/core/common/f/g;->A:Ljava/lang/String;

    invoke-virtual {v3, v5}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_7

    move v3, v4

    goto :goto_3

    :cond_7
    move v3, v1

    :goto_3
    if-eqz v3, :cond_8

    return-void

    .line 1116
    :cond_8
    invoke-virtual {v0}, Lcom/tkay/core/c/a;->ah()Ljava/util/Map;

    move-result-object v0

    if-eqz v0, :cond_b

    .line 1119
    iget-object v3, p0, Lcom/tkay/core/common/k/c$3;->a:Lcom/tkay/core/common/f/g;

    iget-object v3, v3, Lcom/tkay/core/common/f/g;->A:Ljava/lang/String;

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_9

    .line 1120
    iget-object v1, p0, Lcom/tkay/core/common/k/c$3;->a:Lcom/tkay/core/common/f/g;

    iget-object v1, v1, Lcom/tkay/core/common/f/g;->a:Ljava/lang/String;

    invoke-interface {v0, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    goto :goto_4

    .line 1122
    :cond_9
    iget-object v3, p0, Lcom/tkay/core/common/k/c$3;->a:Lcom/tkay/core/common/f/g;

    iget-object v3, v3, Lcom/tkay/core/common/f/g;->a:Ljava/lang/String;

    invoke-interface {v0, v3}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_a

    .line 1123
    iget-object v3, p0, Lcom/tkay/core/common/k/c$3;->a:Lcom/tkay/core/common/f/g;

    iget-object v3, v3, Lcom/tkay/core/common/f/g;->a:Ljava/lang/String;

    invoke-interface {v0, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    .line 1124
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_a

    iget-object v3, p0, Lcom/tkay/core/common/k/c$3;->a:Lcom/tkay/core/common/f/g;

    iget-object v3, v3, Lcom/tkay/core/common/f/g;->A:Ljava/lang/String;

    invoke-virtual {v0, v3}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_a

    move v1, v4

    :cond_a
    :goto_4
    if-eqz v1, :cond_b

    .line 1131
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/k/d;->a(Landroid/content/Context;)Lcom/tkay/core/common/k/d;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/core/common/k/c$3;->a:Lcom/tkay/core/common/f/g;

    invoke-virtual {v0, v1, v2}, Lcom/tkay/core/common/k/d;->a(Lcom/tkay/core/common/f/p;Z)V

    return-void

    :cond_b
    move v1, v2

    .line 1136
    :cond_c
    invoke-static {}, Lcom/tkay/core/common/k/b;->a()Lcom/tkay/core/common/k/b;

    move-result-object v0

    iget-object v2, p0, Lcom/tkay/core/common/k/c$3;->a:Lcom/tkay/core/common/f/g;

    invoke-virtual {v0, v2, v1}, Lcom/tkay/core/common/k/b;->a(Lcom/tkay/core/common/f/g;Z)V

    return-void
.end method
