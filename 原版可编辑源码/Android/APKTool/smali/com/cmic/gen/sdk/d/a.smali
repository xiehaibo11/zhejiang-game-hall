.class public Lcom/cmic/gen/sdk/d/a;
.super Ljava/lang/Object;
.source "EventUtils.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/cmic/gen/sdk/d/a$a;
    }
.end annotation


# static fields
.field private static a:Lcom/cmic/gen/sdk/d/a$a;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/cmic/gen/sdk/d/a$a<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 29
    new-instance v0, Lcom/cmic/gen/sdk/d/a$a;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/cmic/gen/sdk/d/a$a;-><init>(Lcom/cmic/gen/sdk/d/a$1;)V

    sput-object v0, Lcom/cmic/gen/sdk/d/a;->a:Lcom/cmic/gen/sdk/d/a$a;

    return-void
.end method

.method public static a()V
    .locals 3

    const/4 v0, 0x0

    .line 34
    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    .line 35
    sget-object v1, Lcom/cmic/gen/sdk/d/a;->a:Lcom/cmic/gen/sdk/d/a$a;

    const-string v2, "authPageIn"

    invoke-virtual {v1, v2, v0}, Lcom/cmic/gen/sdk/d/a$a;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 36
    sget-object v1, Lcom/cmic/gen/sdk/d/a;->a:Lcom/cmic/gen/sdk/d/a$a;

    const-string v2, "authPageOut"

    invoke-virtual {v1, v2, v0}, Lcom/cmic/gen/sdk/d/a$a;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 38
    sget-object v1, Lcom/cmic/gen/sdk/d/a;->a:Lcom/cmic/gen/sdk/d/a$a;

    const-string v2, "authClickFailed"

    invoke-virtual {v1, v2, v0}, Lcom/cmic/gen/sdk/d/a$a;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 39
    sget-object v1, Lcom/cmic/gen/sdk/d/a;->a:Lcom/cmic/gen/sdk/d/a$a;

    const-string v2, "authClickSuccess"

    invoke-virtual {v1, v2, v0}, Lcom/cmic/gen/sdk/d/a$a;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 40
    sget-object v1, Lcom/cmic/gen/sdk/d/a;->a:Lcom/cmic/gen/sdk/d/a$a;

    const-string v2, "timeOnAuthPage"

    invoke-virtual {v1, v2, v0}, Lcom/cmic/gen/sdk/d/a$a;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 41
    sget-object v1, Lcom/cmic/gen/sdk/d/a;->a:Lcom/cmic/gen/sdk/d/a$a;

    const-string v2, "authPrivacyState"

    invoke-virtual {v1, v2, v0}, Lcom/cmic/gen/sdk/d/a$a;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public static a(Landroid/content/Context;Lcom/cmic/gen/sdk/a;)V
    .locals 12

    const-string v0, "appid"

    const-string v1, "timeOnAuthPage"

    const-string v2, "authClickFailed"

    const-string v3, "authClickSuccess"

    const-string v4, "authPageOut"

    const-string v5, "authPageIn"

    const-string v6, ""

    .line 64
    invoke-virtual {p1}, Lcom/cmic/gen/sdk/a;->b()Lcom/cmic/gen/sdk/a/a;

    move-result-object v7

    .line 66
    :try_start_0
    invoke-virtual {v7}, Lcom/cmic/gen/sdk/a/a;->j()Z

    move-result v7

    if-eqz v7, :cond_0

    return-void

    .line 69
    :cond_0
    new-instance v7, Lcom/cmic/gen/sdk/view/a;

    invoke-direct {v7}, Lcom/cmic/gen/sdk/view/a;-><init>()V

    const/4 v8, 0x0

    .line 70
    invoke-static {v8}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v9

    .line 71
    sget-object v10, Lcom/cmic/gen/sdk/d/a;->a:Lcom/cmic/gen/sdk/d/a$a;

    invoke-virtual {v10, v5, v9}, Lcom/cmic/gen/sdk/d/a$a;->a(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v10

    check-cast v10, Ljava/lang/String;

    invoke-virtual {v10, v9}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v10

    const/4 v11, 0x0

    if-nez v10, :cond_1

    sget-object v10, Lcom/cmic/gen/sdk/d/a;->a:Lcom/cmic/gen/sdk/d/a$a;

    invoke-virtual {v10, v5}, Lcom/cmic/gen/sdk/d/a$a;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/lang/String;

    goto :goto_0

    :cond_1
    move-object v5, v11

    :goto_0
    invoke-virtual {v7, v5}, Lcom/cmic/gen/sdk/view/a;->e(Ljava/lang/String;)V

    .line 72
    sget-object v5, Lcom/cmic/gen/sdk/d/a;->a:Lcom/cmic/gen/sdk/d/a$a;

    invoke-virtual {v5, v4, v9}, Lcom/cmic/gen/sdk/d/a$a;->a(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/lang/String;

    invoke-virtual {v5, v9}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-nez v5, :cond_2

    sget-object v5, Lcom/cmic/gen/sdk/d/a;->a:Lcom/cmic/gen/sdk/d/a$a;

    invoke-virtual {v5, v4}, Lcom/cmic/gen/sdk/d/a$a;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    goto :goto_1

    :cond_2
    move-object v4, v11

    :goto_1
    invoke-virtual {v7, v4}, Lcom/cmic/gen/sdk/view/a;->f(Ljava/lang/String;)V

    .line 74
    sget-object v4, Lcom/cmic/gen/sdk/d/a;->a:Lcom/cmic/gen/sdk/d/a$a;

    invoke-virtual {v4, v3, v9}, Lcom/cmic/gen/sdk/d/a$a;->a(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    invoke-virtual {v4, v9}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-nez v4, :cond_3

    sget-object v4, Lcom/cmic/gen/sdk/d/a;->a:Lcom/cmic/gen/sdk/d/a$a;

    invoke-virtual {v4, v3}, Lcom/cmic/gen/sdk/d/a$a;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    goto :goto_2

    :cond_3
    move-object v3, v11

    :goto_2
    invoke-virtual {v7, v3}, Lcom/cmic/gen/sdk/view/a;->c(Ljava/lang/String;)V

    .line 75
    sget-object v3, Lcom/cmic/gen/sdk/d/a;->a:Lcom/cmic/gen/sdk/d/a$a;

    invoke-virtual {v3, v2, v9}, Lcom/cmic/gen/sdk/d/a$a;->a(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    invoke-virtual {v3, v9}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-nez v3, :cond_4

    sget-object v3, Lcom/cmic/gen/sdk/d/a;->a:Lcom/cmic/gen/sdk/d/a$a;

    invoke-virtual {v3, v2}, Lcom/cmic/gen/sdk/d/a$a;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    goto :goto_3

    :cond_4
    move-object v2, v11

    :goto_3
    invoke-virtual {v7, v2}, Lcom/cmic/gen/sdk/view/a;->b(Ljava/lang/String;)V

    .line 76
    sget-object v2, Lcom/cmic/gen/sdk/d/a;->a:Lcom/cmic/gen/sdk/d/a$a;

    invoke-virtual {v2, v1, v9}, Lcom/cmic/gen/sdk/d/a$a;->a(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-virtual {v2, v9}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_5

    sget-object v2, Lcom/cmic/gen/sdk/d/a;->a:Lcom/cmic/gen/sdk/d/a$a;

    invoke-virtual {v2, v1}, Lcom/cmic/gen/sdk/d/a$a;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    move-object v11, v1

    check-cast v11, Ljava/lang/String;

    :cond_5
    invoke-virtual {v7, v11}, Lcom/cmic/gen/sdk/view/a;->d(Ljava/lang/String;)V

    .line 77
    sget-object v1, Lcom/cmic/gen/sdk/d/a;->a:Lcom/cmic/gen/sdk/d/a$a;

    const-string v2, "authPrivacyState"

    invoke-virtual {v1, v2, v9}, Lcom/cmic/gen/sdk/d/a$a;->a(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-virtual {v7, v1}, Lcom/cmic/gen/sdk/view/a;->a(Ljava/lang/String;)V

    .line 79
    invoke-virtual {v7}, Lcom/cmic/gen/sdk/view/a;->a()Lorg/json/JSONObject;

    move-result-object v1

    .line 81
    new-instance v2, Lcom/cmic/gen/sdk/d/c;

    invoke-direct {v2}, Lcom/cmic/gen/sdk/d/c;-><init>()V

    .line 82
    invoke-virtual {p1, v0, v6}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/cmic/gen/sdk/d/c;->b(Ljava/lang/String;)V

    const-string v3, "traceId"

    .line 83
    invoke-virtual {p1, v3}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/cmic/gen/sdk/d/c;->r(Ljava/lang/String;)V

    .line 84
    invoke-virtual {p1, v0}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Lcom/cmic/gen/sdk/d/c;->b(Ljava/lang/String;)V

    .line 85
    invoke-static {p0}, Lcom/cmic/gen/sdk/e/f;->a(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    .line 86
    invoke-virtual {v2, v0}, Lcom/cmic/gen/sdk/d/c;->i(Ljava/lang/String;)V

    .line 87
    invoke-static {p0}, Lcom/cmic/gen/sdk/e/f;->b(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p0

    .line 88
    invoke-virtual {v2, p0}, Lcom/cmic/gen/sdk/d/c;->j(Ljava/lang/String;)V

    const-string p0, "timeOut"

    .line 89
    invoke-virtual {p1, p0}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/cmic/gen/sdk/d/c;->k(Ljava/lang/String;)V

    .line 90
    sget-object p0, Lcom/cmic/gen/sdk/d/a;->a:Lcom/cmic/gen/sdk/d/a$a;

    const-string v0, "authPageInTime"

    invoke-virtual {p0, v0, v6}, Lcom/cmic/gen/sdk/d/a$a;->a(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/String;

    .line 91
    invoke-virtual {v2, p0}, Lcom/cmic/gen/sdk/d/c;->s(Ljava/lang/String;)V

    .line 93
    sget-object p0, Lcom/cmic/gen/sdk/d/a;->a:Lcom/cmic/gen/sdk/d/a$a;

    const-string v0, "authPageOutTime"

    invoke-virtual {p0, v0, v6}, Lcom/cmic/gen/sdk/d/a$a;->a(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/String;

    .line 94
    invoke-virtual {v2, p0}, Lcom/cmic/gen/sdk/d/c;->t(Ljava/lang/String;)V

    const-string p0, "eventTracking5"

    .line 95
    invoke-virtual {v2, p0}, Lcom/cmic/gen/sdk/d/c;->u(Ljava/lang/String;)V

    const-string p0, "operatortype"

    .line 96
    invoke-virtual {p1, p0, v6}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/cmic/gen/sdk/d/c;->n(Ljava/lang/String;)V

    .line 97
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "networktype"

    invoke-virtual {p1, v0, v8}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;I)I

    move-result v0

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p0, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/cmic/gen/sdk/d/c;->w(Ljava/lang/String;)V

    .line 99
    invoke-static {}, Lcom/cmic/gen/sdk/e/m;->a()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/cmic/gen/sdk/d/c;->e(Ljava/lang/String;)V

    .line 100
    invoke-static {}, Lcom/cmic/gen/sdk/e/m;->b()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/cmic/gen/sdk/d/c;->o(Ljava/lang/String;)V

    .line 101
    invoke-static {}, Lcom/cmic/gen/sdk/e/m;->c()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/cmic/gen/sdk/d/c;->p(Ljava/lang/String;)V

    const-string p0, "simCardNum"

    .line 102
    invoke-virtual {p1, p0}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/cmic/gen/sdk/d/c;->m(Ljava/lang/String;)V

    .line 103
    invoke-virtual {v2, v1}, Lcom/cmic/gen/sdk/d/c;->a(Lorg/json/JSONObject;)V

    const-string p0, "imsiState"

    const-string v0, "0"

    .line 104
    invoke-virtual {p1, p0, v0}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/cmic/gen/sdk/d/c;->c(Ljava/lang/String;)V

    .line 105
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    const-string v3, "methodTimes"

    const-wide/16 v4, 0x0

    invoke-virtual {p1, v3, v4, v5}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;J)J

    move-result-wide v3

    sub-long/2addr v0, v3

    invoke-virtual {p0, v0, v1}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {p0, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/cmic/gen/sdk/d/c;->l(Ljava/lang/String;)V

    .line 109
    new-instance p0, Lcom/cmic/gen/sdk/d/a$1;

    invoke-direct {p0, v2, p1}, Lcom/cmic/gen/sdk/d/a$1;-><init>(Lcom/cmic/gen/sdk/d/c;Lcom/cmic/gen/sdk/a;)V

    invoke-static {p0}, Lcom/cmic/gen/sdk/e/n;->a(Lcom/cmic/gen/sdk/e/n$a;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_4

    :catch_0
    move-exception p0

    .line 117
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_4
    return-void
.end method

.method public static a(Ljava/lang/String;)V
    .locals 3

    .line 46
    :try_start_0
    sget-object v0, Lcom/cmic/gen/sdk/d/a;->a:Lcom/cmic/gen/sdk/d/a$a;

    invoke-virtual {v0, p0}, Lcom/cmic/gen/sdk/d/a$a;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    const/4 v1, 0x0

    .line 48
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    .line 49
    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    :cond_0
    add-int/lit8 v1, v1, 0x1

    .line 52
    sget-object v0, Lcom/cmic/gen/sdk/d/a;->a:Lcom/cmic/gen/sdk/d/a$a;

    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, p0, v1}, Lcom/cmic/gen/sdk/d/a$a;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 53
    sget-object v0, Lcom/cmic/gen/sdk/d/a;->a:Lcom/cmic/gen/sdk/d/a$a;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, "Time"

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {}, Lcom/cmic/gen/sdk/e/o;->a()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, p0, v1}, Lcom/cmic/gen/sdk/d/a$a;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 55
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public static a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 60
    sget-object v0, Lcom/cmic/gen/sdk/d/a;->a:Lcom/cmic/gen/sdk/d/a$a;

    invoke-virtual {v0, p0, p1}, Lcom/cmic/gen/sdk/d/a$a;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method
