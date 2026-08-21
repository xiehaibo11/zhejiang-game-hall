.class public final Lcom/kwad/sdk/api/loader/j;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/sdk/api/loader/j$a;
    }
.end annotation


# static fields
.field public static aix:I


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method private static a(ILcom/kwad/sdk/api/loader/a$a;JILjava/lang/String;)V
    .locals 3

    if-nez p1, :cond_0

    return-void

    :cond_0
    :try_start_0
    new-instance v0, Lcom/kwad/sdk/api/loader/j$a;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/kwad/sdk/api/loader/j$a;-><init>(B)V

    invoke-static {v0, p0}, Lcom/kwad/sdk/api/loader/j$a;->a(Lcom/kwad/sdk/api/loader/j$a;I)Lcom/kwad/sdk/api/loader/j$a;

    move-result-object v0

    sget v2, Lcom/kwad/sdk/api/loader/j;->aix:I

    invoke-static {v0, v2}, Lcom/kwad/sdk/api/loader/j$a;->b(Lcom/kwad/sdk/api/loader/j$a;I)Lcom/kwad/sdk/api/loader/j$a;

    move-result-object v0

    iget-object v2, p1, Lcom/kwad/sdk/api/loader/a$a;->sdkVersion:Ljava/lang/String;

    invoke-static {v0, v2}, Lcom/kwad/sdk/api/loader/j$a;->a(Lcom/kwad/sdk/api/loader/j$a;Ljava/lang/String;)Lcom/kwad/sdk/api/loader/j$a;

    move-result-object v0

    iget-object p1, p1, Lcom/kwad/sdk/api/loader/a$a;->aic:Ljava/lang/String;

    invoke-static {v0, p1}, Lcom/kwad/sdk/api/loader/j$a;->b(Lcom/kwad/sdk/api/loader/j$a;Ljava/lang/String;)Lcom/kwad/sdk/api/loader/j$a;

    move-result-object p1

    invoke-static {p1, p2, p3}, Lcom/kwad/sdk/api/loader/j$a;->a(Lcom/kwad/sdk/api/loader/j$a;J)Lcom/kwad/sdk/api/loader/j$a;

    move-result-object p1

    invoke-static {p1, p4}, Lcom/kwad/sdk/api/loader/j$a;->c(Lcom/kwad/sdk/api/loader/j$a;I)Lcom/kwad/sdk/api/loader/j$a;

    move-result-object p1

    invoke-static {p1, p5}, Lcom/kwad/sdk/api/loader/j$a;->c(Lcom/kwad/sdk/api/loader/j$a;Ljava/lang/String;)Lcom/kwad/sdk/api/loader/j$a;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/api/loader/j$a;->a(Lcom/kwad/sdk/api/loader/j$a;)Lorg/json/JSONObject;

    move-result-object p1

    new-instance p2, Ljava/lang/StringBuilder;

    const-string p3, "status:"

    invoke-direct {p2, p3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, p0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p0, "--jo:"

    invoke-virtual {p2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string p0, "reportDynamicUpdate"

    const/4 p2, 0x1

    new-array p2, p2, [Ljava/lang/Object;

    aput-object p1, p2, v1

    invoke-static {p0, p2}, Lcom/kwad/sdk/api/c;->c(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method public static a(Lcom/kwad/sdk/api/loader/a$a;)V
    .locals 7

    sget v0, Lcom/kwad/sdk/api/loader/j;->aix:I

    add-int/lit8 v0, v0, 0x1

    sput v0, Lcom/kwad/sdk/api/loader/j;->aix:I

    const/4 v1, 0x1

    const-wide/16 v3, 0x0

    const/4 v5, 0x0

    const-string v6, ""

    move-object v2, p0

    invoke-static/range {v1 .. v6}, Lcom/kwad/sdk/api/loader/j;->a(ILcom/kwad/sdk/api/loader/a$a;JILjava/lang/String;)V

    return-void
.end method

.method public static a(Lcom/kwad/sdk/api/loader/a$a;ILjava/lang/String;)V
    .locals 6

    const/4 v0, 0x4

    const-wide/16 v2, 0x0

    move-object v1, p0

    move v4, p1

    move-object v5, p2

    invoke-static/range {v0 .. v5}, Lcom/kwad/sdk/api/loader/j;->a(ILcom/kwad/sdk/api/loader/a$a;JILjava/lang/String;)V

    return-void
.end method

.method public static a(Lcom/kwad/sdk/api/loader/a$a;J)V
    .locals 6

    const/4 v0, 0x2

    const/4 v4, 0x0

    const-string v5, ""

    move-object v1, p0

    move-wide v2, p1

    invoke-static/range {v0 .. v5}, Lcom/kwad/sdk/api/loader/j;->a(ILcom/kwad/sdk/api/loader/a$a;JILjava/lang/String;)V

    return-void
.end method

.method public static a(Lcom/kwad/sdk/api/loader/a$a;JLjava/lang/String;)V
    .locals 6

    const/4 v0, 0x3

    const/4 v4, 0x0

    move-object v1, p0

    move-wide v2, p1

    move-object v5, p3

    invoke-static/range {v0 .. v5}, Lcom/kwad/sdk/api/loader/j;->a(ILcom/kwad/sdk/api/loader/a$a;JILjava/lang/String;)V

    return-void
.end method

.method public static b(Lcom/kwad/sdk/api/loader/a$a;)V
    .locals 6

    const/4 v0, 0x5

    const-wide/16 v2, 0x0

    const/4 v4, 0x0

    const-string v5, ""

    move-object v1, p0

    invoke-static/range {v0 .. v5}, Lcom/kwad/sdk/api/loader/j;->a(ILcom/kwad/sdk/api/loader/a$a;JILjava/lang/String;)V

    return-void
.end method

.method public static b(Lcom/kwad/sdk/api/loader/a$a;ILjava/lang/String;)V
    .locals 6

    const/4 v0, 0x7

    const-wide/16 v2, 0x0

    move-object v1, p0

    move v4, p1

    move-object v5, p2

    invoke-static/range {v0 .. v5}, Lcom/kwad/sdk/api/loader/j;->a(ILcom/kwad/sdk/api/loader/a$a;JILjava/lang/String;)V

    return-void
.end method

.method public static b(Lcom/kwad/sdk/api/loader/a$a;J)V
    .locals 6

    const/4 v0, 0x6

    const/4 v4, 0x0

    const-string v5, ""

    move-object v1, p0

    move-wide v2, p1

    invoke-static/range {v0 .. v5}, Lcom/kwad/sdk/api/loader/j;->a(ILcom/kwad/sdk/api/loader/a$a;JILjava/lang/String;)V

    return-void
.end method
