.class public final Lcom/vivo/push/b/p;
.super Lcom/vivo/push/o;


# instance fields
.field private a:Ljava/lang/String;

.field private b:Ljava/lang/String;

.field private c:[B

.field private d:J

.field private e:Lcom/vivo/push/model/InsideNotificationItem;


# direct methods
.method public constructor <init>()V
    .locals 1

    const/4 v0, 0x5

    invoke-direct {p0, v0}, Lcom/vivo/push/o;-><init>(I)V

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;JLcom/vivo/push/model/InsideNotificationItem;)V
    .locals 1

    const/4 v0, 0x5

    invoke-direct {p0, v0}, Lcom/vivo/push/o;-><init>(I)V

    iput-object p1, p0, Lcom/vivo/push/b/p;->a:Ljava/lang/String;

    iput-wide p2, p0, Lcom/vivo/push/b/p;->d:J

    iput-object p4, p0, Lcom/vivo/push/b/p;->e:Lcom/vivo/push/model/InsideNotificationItem;

    return-void
.end method


# virtual methods
.method protected final c(Lcom/vivo/push/a;)V
    .locals 3

    iget-object v0, p0, Lcom/vivo/push/b/p;->a:Ljava/lang/String;

    const-string v1, "package_name"

    invoke-virtual {p1, v1, v0}, Lcom/vivo/push/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    iget-wide v0, p0, Lcom/vivo/push/b/p;->d:J

    const-string v2, "notify_id"

    invoke-virtual {p1, v2, v0, v1}, Lcom/vivo/push/a;->a(Ljava/lang/String;J)V

    iget-object v0, p0, Lcom/vivo/push/b/p;->e:Lcom/vivo/push/model/InsideNotificationItem;

    invoke-static {v0}, Lcom/vivo/push/util/q;->b(Lcom/vivo/push/model/InsideNotificationItem;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "notification_v1"

    invoke-virtual {p1, v1, v0}, Lcom/vivo/push/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/vivo/push/b/p;->b:Ljava/lang/String;

    const-string v1, "open_pkg_name"

    invoke-virtual {p1, v1, v0}, Lcom/vivo/push/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/vivo/push/b/p;->c:[B

    const-string v1, "open_pkg_name_encode"

    invoke-virtual {p1, v1, v0}, Lcom/vivo/push/a;->a(Ljava/lang/String;[B)V

    return-void
.end method

.method public final d()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/vivo/push/b/p;->a:Ljava/lang/String;

    return-object v0
.end method

.method protected final d(Lcom/vivo/push/a;)V
    .locals 3

    const-string v0, "package_name"

    invoke-virtual {p1, v0}, Lcom/vivo/push/a;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/vivo/push/b/p;->a:Ljava/lang/String;

    const-string v0, "notify_id"

    const-wide/16 v1, -0x1

    invoke-virtual {p1, v0, v1, v2}, Lcom/vivo/push/a;->b(Ljava/lang/String;J)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/vivo/push/b/p;->d:J

    const-string v0, "open_pkg_name"

    invoke-virtual {p1, v0}, Lcom/vivo/push/a;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/vivo/push/b/p;->b:Ljava/lang/String;

    const-string v0, "open_pkg_name_encode"

    invoke-virtual {p1, v0}, Lcom/vivo/push/a;->b(Ljava/lang/String;)[B

    move-result-object v0

    iput-object v0, p0, Lcom/vivo/push/b/p;->c:[B

    const-string v0, "notification_v1"

    invoke-virtual {p1, v0}, Lcom/vivo/push/a;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    invoke-static {p1}, Lcom/vivo/push/util/q;->a(Ljava/lang/String;)Lcom/vivo/push/model/InsideNotificationItem;

    move-result-object p1

    iput-object p1, p0, Lcom/vivo/push/b/p;->e:Lcom/vivo/push/model/InsideNotificationItem;

    :cond_0
    iget-object p1, p0, Lcom/vivo/push/b/p;->e:Lcom/vivo/push/model/InsideNotificationItem;

    if-eqz p1, :cond_1

    iget-wide v0, p0, Lcom/vivo/push/b/p;->d:J

    invoke-virtual {p1, v0, v1}, Lcom/vivo/push/model/InsideNotificationItem;->setMsgId(J)V

    :cond_1
    return-void
.end method

.method public final e()J
    .locals 2

    iget-wide v0, p0, Lcom/vivo/push/b/p;->d:J

    return-wide v0
.end method

.method public final f()Lcom/vivo/push/model/InsideNotificationItem;
    .locals 1

    iget-object v0, p0, Lcom/vivo/push/b/p;->e:Lcom/vivo/push/model/InsideNotificationItem;

    return-object v0
.end method

.method public final toString()Ljava/lang/String;
    .locals 1

    const-string v0, "OnNotificationClickCommand"

    return-object v0
.end method
