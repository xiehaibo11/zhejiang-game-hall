.class final Lcom/tkay/expressad/videocommon/b/n$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/videocommon/d/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/videocommon/b/n;->a()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/foundation/d/c;

.field final synthetic b:Lcom/tkay/expressad/videocommon/b/n;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/videocommon/b/n;Lcom/tkay/expressad/foundation/d/c;)V
    .locals 0

    .line 1119
    iput-object p1, p0, Lcom/tkay/expressad/videocommon/b/n$2;->b:Lcom/tkay/expressad/videocommon/b/n;

    iput-object p2, p0, Lcom/tkay/expressad/videocommon/b/n$2;->a:Lcom/tkay/expressad/foundation/d/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;)V
    .locals 2

    .line 1122
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/n$2;->b:Lcom/tkay/expressad/videocommon/b/n;

    invoke-static {v0}, Lcom/tkay/expressad/videocommon/b/n;->b(Lcom/tkay/expressad/videocommon/b/n;)Lcom/tkay/expressad/videocommon/d/b;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 1123
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/n$2;->b:Lcom/tkay/expressad/videocommon/b/n;

    invoke-static {v0}, Lcom/tkay/expressad/videocommon/b/n;->b(Lcom/tkay/expressad/videocommon/b/n;)Lcom/tkay/expressad/videocommon/d/b;

    move-result-object v0

    invoke-interface {v0, p1}, Lcom/tkay/expressad/videocommon/d/b;->a(Ljava/lang/String;)V

    .line 1126
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/n$2;->b:Lcom/tkay/expressad/videocommon/b/n;

    invoke-static {v0}, Lcom/tkay/expressad/videocommon/b/n;->c(Lcom/tkay/expressad/videocommon/b/n;)Ljava/util/concurrent/ConcurrentHashMap;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/n$2;->b:Lcom/tkay/expressad/videocommon/b/n;

    invoke-static {v0}, Lcom/tkay/expressad/videocommon/b/n;->c(Lcom/tkay/expressad/videocommon/b/n;)Ljava/util/concurrent/ConcurrentHashMap;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/concurrent/ConcurrentHashMap;->size()I

    move-result v0

    if-lez v0, :cond_1

    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/n$2;->a:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_1

    .line 1127
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/n$2;->b:Lcom/tkay/expressad/videocommon/b/n;

    invoke-static {v0}, Lcom/tkay/expressad/videocommon/b/n;->c(Lcom/tkay/expressad/videocommon/b/n;)Ljava/util/concurrent/ConcurrentHashMap;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/videocommon/b/n$2;->a:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/videocommon/d/b;

    if-eqz v0, :cond_1

    .line 1129
    invoke-interface {v0, p1}, Lcom/tkay/expressad/videocommon/d/b;->a(Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 1136
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/n$2;->a:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_0

    .line 1137
    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->aB()Ljava/util/ArrayList;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/n$2;->a:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->aB()Ljava/util/ArrayList;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v0

    if-lez v0, :cond_0

    .line 1138
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/n$2;->a:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->aB()Ljava/util/ArrayList;

    move-result-object v0

    const/4 v1, 0x0

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 1145
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/n$2;->b:Lcom/tkay/expressad/videocommon/b/n;

    invoke-static {v0}, Lcom/tkay/expressad/videocommon/b/n;->b(Lcom/tkay/expressad/videocommon/b/n;)Lcom/tkay/expressad/videocommon/d/b;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 1146
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/n$2;->b:Lcom/tkay/expressad/videocommon/b/n;

    invoke-static {v0}, Lcom/tkay/expressad/videocommon/b/n;->b(Lcom/tkay/expressad/videocommon/b/n;)Lcom/tkay/expressad/videocommon/d/b;

    move-result-object v0

    invoke-interface {v0, p1, p2}, Lcom/tkay/expressad/videocommon/d/b;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1149
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/n$2;->b:Lcom/tkay/expressad/videocommon/b/n;

    invoke-static {v0}, Lcom/tkay/expressad/videocommon/b/n;->c(Lcom/tkay/expressad/videocommon/b/n;)Ljava/util/concurrent/ConcurrentHashMap;

    move-result-object v0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/n$2;->b:Lcom/tkay/expressad/videocommon/b/n;

    invoke-static {v0}, Lcom/tkay/expressad/videocommon/b/n;->c(Lcom/tkay/expressad/videocommon/b/n;)Ljava/util/concurrent/ConcurrentHashMap;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/concurrent/ConcurrentHashMap;->size()I

    move-result v0

    if-lez v0, :cond_2

    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/n$2;->a:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_2

    .line 1150
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/n$2;->b:Lcom/tkay/expressad/videocommon/b/n;

    invoke-static {v0}, Lcom/tkay/expressad/videocommon/b/n;->c(Lcom/tkay/expressad/videocommon/b/n;)Ljava/util/concurrent/ConcurrentHashMap;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/videocommon/b/n$2;->a:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/videocommon/d/b;

    if-eqz v0, :cond_2

    .line 1152
    invoke-interface {v0, p1, p2}, Lcom/tkay/expressad/videocommon/d/b;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    return-void
.end method
