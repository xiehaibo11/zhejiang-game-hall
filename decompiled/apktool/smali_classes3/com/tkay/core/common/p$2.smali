.class final Lcom/tkay/core/common/p$2;
.super Landroid/content/BroadcastReceiver;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/p;->f()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/common/p;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/p;)V
    .locals 0

    .line 124
    iput-object p1, p0, Lcom/tkay/core/common/p$2;->a:Lcom/tkay/core/common/p;

    invoke-direct {p0}, Landroid/content/BroadcastReceiver;-><init>()V

    return-void
.end method

.method private a(Ljava/lang/String;)Lcom/tkay/core/common/f/h;
    .locals 3

    .line 162
    iget-object v0, p0, Lcom/tkay/core/common/p$2;->a:Lcom/tkay/core/common/p;

    invoke-static {v0}, Lcom/tkay/core/common/p;->c(Lcom/tkay/core/common/p;)Lcom/tkay/core/common/f/h;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/core/common/p$2;->a:Lcom/tkay/core/common/p;

    invoke-static {v0}, Lcom/tkay/core/common/p;->c(Lcom/tkay/core/common/p;)Lcom/tkay/core/common/f/h;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->B()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, p1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 163
    iget-object p1, p0, Lcom/tkay/core/common/p$2;->a:Lcom/tkay/core/common/p;

    invoke-static {p1}, Lcom/tkay/core/common/p;->c(Lcom/tkay/core/common/p;)Lcom/tkay/core/common/f/h;

    move-result-object p1

    return-object p1

    .line 166
    :cond_0
    iget-object v0, p0, Lcom/tkay/core/common/p$2;->a:Lcom/tkay/core/common/p;

    invoke-static {v0}, Lcom/tkay/core/common/p;->d(Lcom/tkay/core/common/p;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object v0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/tkay/core/common/p$2;->a:Lcom/tkay/core/common/p;

    invoke-static {v0}, Lcom/tkay/core/common/p;->d(Lcom/tkay/core/common/p;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v0

    if-lez v0, :cond_2

    .line 167
    iget-object v0, p0, Lcom/tkay/core/common/p$2;->a:Lcom/tkay/core/common/p;

    invoke-static {v0}, Lcom/tkay/core/common/p;->d(Lcom/tkay/core/common/p;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_1
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/core/common/f/h;

    if-eqz v1, :cond_1

    .line 168
    invoke-virtual {v1}, Lcom/tkay/core/common/f/h;->B()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2, p1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_1

    return-object v1

    :cond_2
    const/4 p1, 0x0

    return-object p1
.end method


# virtual methods
.method public final onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 10

    .line 128
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object p1

    .line 129
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const-string v0, "Y29tLnhpYW9taS5tYXJrZXQuRE1fUEFHRV9PUEVORUQ="

    .line 132
    invoke-static {v0}, Lcom/tkay/core/common/l/c;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_8

    const-string v0, "Y29tLnhpYW9taS5tYXJrZXQuRE1fUEFHRV9DTE9TRUQ="

    .line 133
    invoke-static {v0}, Lcom/tkay/core/common/l/c;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_8

    const-string v0, "Y29tLnhpYW9taS5tYXJrZXQuRElSRUNUX01BSUxfU1RBVFVT"

    .line 134
    invoke-static {v0}, Lcom/tkay/core/common/l/c;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_8

    .line 135
    invoke-virtual {p2}, Landroid/content/Intent;->getExtras()Landroid/os/Bundle;

    move-result-object p1

    if-nez p1, :cond_1

    return-void

    :cond_1
    const/4 p2, -0x1

    const-string v0, "code"

    .line 140
    invoke-virtual {p1, v0, p2}, Landroid/os/Bundle;->getInt(Ljava/lang/String;I)I

    move-result v4

    const-string v0, "packageName"

    const-string v1, ""

    .line 141
    invoke-virtual {p1, v0, v1}, Landroid/os/Bundle;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    if-eq v4, p2, :cond_8

    .line 143
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-eqz p2, :cond_2

    goto/16 :goto_1

    .line 1162
    :cond_2
    iget-object p2, p0, Lcom/tkay/core/common/p$2;->a:Lcom/tkay/core/common/p;

    invoke-static {p2}, Lcom/tkay/core/common/p;->c(Lcom/tkay/core/common/p;)Lcom/tkay/core/common/f/h;

    move-result-object p2

    if-eqz p2, :cond_3

    iget-object p2, p0, Lcom/tkay/core/common/p$2;->a:Lcom/tkay/core/common/p;

    invoke-static {p2}, Lcom/tkay/core/common/p;->c(Lcom/tkay/core/common/p;)Lcom/tkay/core/common/f/h;

    move-result-object p2

    invoke-virtual {p2}, Lcom/tkay/core/common/f/h;->B()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2, p1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p2

    if-eqz p2, :cond_3

    .line 1163
    iget-object p1, p0, Lcom/tkay/core/common/p$2;->a:Lcom/tkay/core/common/p;

    invoke-static {p1}, Lcom/tkay/core/common/p;->c(Lcom/tkay/core/common/p;)Lcom/tkay/core/common/f/h;

    move-result-object p1

    goto :goto_0

    .line 1166
    :cond_3
    iget-object p2, p0, Lcom/tkay/core/common/p$2;->a:Lcom/tkay/core/common/p;

    invoke-static {p2}, Lcom/tkay/core/common/p;->d(Lcom/tkay/core/common/p;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object p2

    if-eqz p2, :cond_5

    iget-object p2, p0, Lcom/tkay/core/common/p$2;->a:Lcom/tkay/core/common/p;

    invoke-static {p2}, Lcom/tkay/core/common/p;->d(Lcom/tkay/core/common/p;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object p2

    invoke-virtual {p2}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result p2

    if-lez p2, :cond_5

    .line 1167
    iget-object p2, p0, Lcom/tkay/core/common/p$2;->a:Lcom/tkay/core/common/p;

    invoke-static {p2}, Lcom/tkay/core/common/p;->d(Lcom/tkay/core/common/p;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object p2

    invoke-virtual {p2}, Ljava/util/concurrent/CopyOnWriteArrayList;->iterator()Ljava/util/Iterator;

    move-result-object p2

    :cond_4
    invoke-interface {p2}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_5

    invoke-interface {p2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/core/common/f/h;

    if-eqz v0, :cond_4

    .line 1168
    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->B()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1, p1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_4

    move-object p1, v0

    goto :goto_0

    :cond_5
    const/4 p1, 0x0

    :goto_0
    if-nez p1, :cond_6

    return-void

    :cond_6
    const/4 p2, 0x4

    if-ne v4, p2, :cond_7

    .line 154
    iget-object p2, p0, Lcom/tkay/core/common/p$2;->a:Lcom/tkay/core/common/p;

    invoke-virtual {p2, p1}, Lcom/tkay/core/common/p;->b(Lcom/tkay/core/common/f/h;)V

    .line 156
    :cond_7
    invoke-virtual {p1}, Lcom/tkay/core/common/f/h;->j()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1}, Lcom/tkay/core/common/f/h;->p()Ljava/lang/String;

    move-result-object v2

    const-wide/16 v6, 0x0

    const-wide/16 v8, 0x0

    const-string v3, ""

    const-string v5, ""

    invoke-static/range {v1 .. v9}, Lcom/tkay/core/common/k/c;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;JJ)V

    nop

    :cond_8
    :goto_1
    return-void
.end method
