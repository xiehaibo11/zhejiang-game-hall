.class public Lcom/igexin/push/extension/distribution/basic/g/f;
.super Ljava/lang/Object;


# direct methods
.method public static a(Landroid/app/NotificationManager;ILandroid/app/Notification;ILcom/igexin/push/extension/distribution/basic/b/a;)V
    .locals 2

    :try_start_0
    iget p3, p2, Landroid/app/Notification;->icon:I

    const/4 v0, 0x0

    if-eqz p3, :cond_0

    sget-object p3, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-virtual {p3}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p3

    iget v1, p2, Landroid/app/Notification;->icon:I

    invoke-virtual {p3, v1}, Landroid/content/res/Resources;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object p3

    if-nez p3, :cond_0

    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string p1, "NotificationShow|showNotification smallIconId: "

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p1, p2, Landroid/app/Notification;->icon:I

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, " couldn\'t find resource"

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    new-array p1, v0, [Ljava/lang/Object;

    invoke-static {p0, p1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    return-void

    :cond_0
    invoke-virtual {p4}, Lcom/igexin/push/extension/distribution/basic/b/a;->A()I

    move-result p3

    if-lez p3, :cond_1

    invoke-virtual {p4}, Lcom/igexin/push/extension/distribution/basic/b/a;->A()I

    move-result p3

    invoke-static {p3, v0}, Lcom/igexin/push/extension/distribution/basic/g/d;->a(IZ)Z

    invoke-virtual {p4}, Lcom/igexin/push/extension/distribution/basic/b/a;->A()I

    move-result p3

    invoke-static {p3, p2}, Lcom/igexin/push/extension/distribution/basic/g/d;->a(ILandroid/app/Notification;)Z

    :cond_1
    invoke-virtual {p0, p1, p2}, Landroid/app/NotificationManager;->notify(ILandroid/app/Notification;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method
