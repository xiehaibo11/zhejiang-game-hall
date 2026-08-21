.class public final Lcom/vivo/push/util/e;
.super Ljava/lang/Object;


# direct methods
.method public static a(JLjava/util/HashMap;)Z
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(J",
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)Z"
        }
    .end annotation

    new-instance v0, Lcom/vivo/push/b/x;

    invoke-direct {v0, p0, p1}, Lcom/vivo/push/b/x;-><init>(J)V

    invoke-virtual {v0, p2}, Lcom/vivo/push/b/x;->a(Ljava/util/HashMap;)V

    invoke-virtual {v0}, Lcom/vivo/push/b/x;->d()V

    invoke-static {}, Lcom/vivo/push/e;->a()Lcom/vivo/push/e;

    move-result-object p0

    invoke-virtual {p0, v0}, Lcom/vivo/push/e;->a(Lcom/vivo/push/o;)V

    const/4 p0, 0x1

    return p0
.end method

.method public static a(Landroid/content/Context;JJ)Z
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "report message: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, p2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v1, ", reportType: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3, p4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ClientReportUtil"

    invoke-static {v1, v0}, Lcom/vivo/push/util/p;->d(Ljava/lang/String;Ljava/lang/String;)I

    new-instance v0, Lcom/vivo/push/b/x;

    invoke-direct {v0, p3, p4}, Lcom/vivo/push/b/x;-><init>(J)V

    new-instance p3, Ljava/util/HashMap;

    invoke-direct {p3}, Ljava/util/HashMap;-><init>()V

    invoke-static {p1, p2}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object p1

    const-string p2, "messageID"

    invoke-virtual {p3, p2, p1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p1

    invoke-static {p0, p1}, Lcom/vivo/push/util/z;->b(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    const-string p1, "remoteAppId"

    invoke-virtual {p3, p1, p0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_0
    invoke-virtual {v0, p3}, Lcom/vivo/push/b/x;->a(Ljava/util/HashMap;)V

    invoke-static {}, Lcom/vivo/push/e;->a()Lcom/vivo/push/e;

    move-result-object p0

    invoke-virtual {p0, v0}, Lcom/vivo/push/e;->a(Lcom/vivo/push/o;)V

    const/4 p0, 0x1

    return p0
.end method
